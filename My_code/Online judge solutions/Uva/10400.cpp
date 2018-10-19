/**Bismillahir Rahmanir Rahim**/
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
#define inf           100000000
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
#define pfi(a)        printf("%ld",a)
#define pf64(a)       printf("%I64d",a)
#define pfii(a,b)     printf("%ld %ld",a,b)
#define pf6464(a,b)   printf("%I64d %I64d",a,b)
#define pfs(a)        printf("%s",a)
#define pfss(a,b)     printf("%s %s",a,b)
#define pfd(a)        printf("%lf",a)
#define pfdd(a,b)     printf("%lf %lf",a,b)
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define repl(i,n)     for(int i=1;i<=n;i++)
#define repr(i,n)     for(int i=n;i>=0;i--)
#define repi(i,a,b)   for(int i(a),_b(b);i<=_b;++i)
#define repir(i,a,b)  for(int i=a;i>=b;i--)
#define ff            first
#define ss            second
#define all(a)        a.begin(),a.end()
#define mem(x,a)      memset(x,a,sizeof(x))
#define repe(it,c)    for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
int dx[]={0,0,1,-1,1,-1,1,-1},dy[]={1,-1,0,0,1,-1,-1,1};
typedef long long ll;
typedef long l;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<string> vs;

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
int dp[101][32001];
long ar[101],n,k;
int rec(int i,int m)
{
    if(i==n)
    {
        if(m==k) return 1;
        return 0;
    }
    if(m<0||m>32000||i>n) return 0;
    if(dp[i][m]!=-1) return dp[i][m];
    int r1,r2,r3,r4;
    r1=rec(i+1,m+ar[i]);
    r2=rec(i+1,m-ar[i]);
    r3=rec(i+1,m*ar[i]);
    r4=rec(i+1,m/ar[i]);

    if(r1||r2||r3||r4)
        return dp[i][m]=1;
    else return dp[i][m]=0;
}
string s;
void print(int i,int m)
{
    if(i==n)
    {
        return ;
    }
    if(m>32000||i>n) return ;
    //if(dp[i][m]!=-1) return dp[i][m];
    int r1,r2,r3,r4;
    r1=rec(i+1,m+ar[i]);
    r2=rec(i+1,m-ar[i]);
    r3=rec(i+1,m*ar[i]);
    r4=rec(i+1,m/ar[i]);
    if(r1)
    {
        s+="+";
        print(i+1,m+ar[i]);
    }
    else if(r2)
    {
        s+="-";
        print(i+1,m-ar[i]);
    }
    else if(r3)
    {
        s+="*";
        print(i+1,m*ar[i]);
    }
    else if(r4)
    {
        s+="/";
        print(i+1,m/ar[i]);
    }
    return;
}
int main()
{
ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
 long t,kk;
cin>>t;
for(kk=1;kk<=t;kk++)
{
    mem(dp,-1);
    cin>>n;
    rep(i,n) cin>>ar[i];
    cin>>k;
    s="";
    if(rec(1,ar[0]))
    {
        print(1,ar[0]);
        rep(i,n-1)
        {
            cout<<ar[i]<<s[i];
        }
        cout<<ar[n-1]<<"="<<k<<endl;
    }
    else cout<<"NO EXPRESSION\n";

}
return 0;
}





