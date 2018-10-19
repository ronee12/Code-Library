/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include <climits>
#include <complex>
#include <numeric>
#include <valarray>
#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
#define inf           (1<<29)
#define pb            push_back
#define mp            make_pair
#define eps           1e-9
#define nl            printf("\n")
#define spc           printf(" ")
#define sci(n)        scanf("%ld",&n)
#define sc64(n)       scanf("%I64d",&n)
#define scii(a,b)     scanf("%ld %ld",&a,&b)
#define sc6464(a,b)   scanf("%I64d %I64d",&a,&b)
#define scs(s)        scanf("%s",s)
#define scss(a,b)     scanf("%s %s",a,b)
#define scd(f)        scanf("%lf",&f)
#define scdd(a,b)     scanf("%lf %lf",&a,&b)
#define prc(k)        printf("Case %ld: ",k);
#define pri(a)        printf("%ld",a)
#define pr64(a)       printf("%I64d",a)
#define prii(a,b)     printf("%ld %ld",a,b)
#define pr6464(a,b)   printf("%I64d %I64d",a,b)
#define prs(a)        printf("%s",a)
#define prss(a,b)     printf("%s %s",a,b)
#define prd(a)        printf("%lf",a)
#define prdd(a,b)     printf("%lf %lf",a,b)
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define repr(i,n)     for(int i=n;i>=0;i--)
#define repi(i,a,b)   for(int i(a),_b(b);i<=_b;++i)
#define repl(i,n)     for(int i(1),_n(n);i<=_n;++i)
#define repir(i,a,b)  for(int i=a;i>=b;i--)
#define chk(a,k) ((bool)(a&(1<<(k))))
#define off(a,k) (a&(~(1<<(k))))
#define on(a,k) (a|(1<<(k)))
#define ff            first
#define ss            second
#define all(a)        a.begin(),a.end()
#define mem(x,a)      memset(x,a,sizeof(x))
#define repe(it,c)    for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
int dx[]={0,0,1,-1,1,-1,1,-1},dy[]={1,-1,0,0,1,-1,-1,1};
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<string> vs;
#define ll long long
typedef vector<vector<int> > vvi;
inline void cn( long &n )//fast input function
{
n=0;
long ch=getchar();int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}
while(ch >= '0' && ch <= '9')
n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
n=n*sign;
}
template<class T> void cmin(T &a,T b){if(b<a) a=b;}
template<class T> void cmax(T &a,T b){if(b>a) a=b;}
template<class T> int len(const T&c){return (int)c.size();}
template<class T> int len(char c[]){return (int)strlen(c);}
string itos(long n){string s;while(n){s+=(n%10+48);n/=10;}reverse(all(s));return s;}
long stoi(string s){long n=0;rep(i,len(s))n=n*10+(s[i]-48);return n;}

//Polya-Burnside theory : (n^6+3n^4+12n^3+8n^2)/24
#define DEBUG 1
#if DEBUG && !ONLINE_JUDGE
	#define debug(args...) (Debugger()) , args
	class Debugger { public: Debugger(const std::string& _separator = ", ") : first(true), separator(_separator){} template<typename ObjectType> Debugger& operator , (const ObjectType& v) { if(!first) std::cerr << separator; std::cerr << v; first = false; return *this; } ~Debugger() { std::cerr << endl;} private: bool first; std::string separator; }; template <typename T1, typename T2> inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p) { return os << "(" << p.first << ", " << p.second << ")"; } template<typename T> inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v) { bool first = true; os << "["; for(unsigned int i = 0; i < v.size(); i++) { if(!first) os << ", "; os << v[i]; first = false; } return os << "]"; } template<typename T> inline std::ostream &operator << (std::ostream & os,const std::set<T>& v) { bool first = true; os << "["; for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii) { if(!first) os << ", "; os << *ii; first = false; } return os << "]"; } template<typename T1, typename T2> inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v) { bool first = true; os << "["; for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii) { if(!first) os << ", "; os << *ii ; first = false; } return os << "]"; }
#else
		#define debug(args...)
#endif
string a,b;
long dp[50][50];
long Edit_distance(int i,int j)
{
    if(len(a)<=i) return len(b)-j;
    if(len(b)<=j) return len(a)-i;
    long match,ins,del,p;
    if(dp[i][j]!=-1) return dp[i][j];

    if(a[i]==b[j]) p=0; else p=1;

    match= Edit_distance(i+1,j+1) + p;
    ins= Edit_distance(i,j+1) + 1;
    del= Edit_distance(i+1,j) + 1;

    return dp[i][j]=min(match,min(ins,del));
}

void print(int i,int j)
{
    if(len(a)<=i) {
            for(int k=j;k<len(b);k++)
            {
                 cout<<"I"<<b[k];
                 printf("%02d",k+1);
            }
            // kaj baki

            return ;

    }
    if(len(b)<=j) {
            for(int k=i;k<len(a);k++)
            {
                 cout<<"D"<<a[k];
                 printf("%02d",j+1);
            }
          // kaj baki
            return ;

    }
    long match,ins,del,p;

    if(a[i]==b[j]) p=0; else p=1;

    match= Edit_distance(i+1,j+1) + p;
    ins= Edit_distance(i,j+1) + 1;
    del= Edit_distance(i+1,j) + 1;


    if(match<=ins and match <=del )
    {
        if(p)
        {
            cout<<"C"<<b[j];
            printf("%02d",j+1);
        }
        //cout<<"swap"<<" "<<i<<" "<<j<<endl;
        print(i+1,j+1);
    }
    else if(ins<=match and ins<=del)
    {
        cout<<"I"<<b[j];
        printf("%02d",j+1);
        //cout<<"ins"<<" "<<j<<endl;
        print(i,j+1);
    }
    else
    {
        cout<<"D"<<a[i];
        printf("%02d",j+1);
        //cout<<"del"<<" "<<i<<endl;
        print(i+1,j);
    }

    //return dp[i][j]=min(match,min(ins,del));
}


int main()
{

while(cin>>a){
        if(a=="#") break;
          cin>>b;
        mem(dp,-1);
        Edit_distance(0,0);
        print(0,0);
        cout<<"E\n";
}




return 0;
}
