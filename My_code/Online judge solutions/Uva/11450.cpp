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
#define pfi(a)        printf("%ld",a)
#define pf64(a)       printf("%I64d",a)
#define pfii(a,b)     printf("%ld %ld",a,b)
#define pf6464(a,b)   printf("%I64d %I64d",a,b)
#define pfs(a)        printf("%s",a)
#define pfss(a,b)     printf("%s %s",a,b)
#define pfd(a)        printf("%lf",a)
#define pfdd(a,b)     printf("%lf %lf",a,b)
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
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
long n,m,r[21],ar[21][21],dp[21][201];
long rec(int i,long val)
{
    if(i==m||val>n)
    {
        return 0;
    }
    if(dp[i][val]!=-1) return dp[i][val];
    long mx=0;
    rep(j,r[i])
    {
        if(val+ar[i][j]<=n)
        cmax(mx,ar[i][j]+rec(i+1,val+ar[i][j]));
    }
    return dp[i][val]=mx;
}
long fun(long n)
{
    if(n==1) return 1;
    return n*fun(n-1);
}
int main()
{
//ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
cout<<fun(5);
long t,k;
cin>>t;
for(k=1;k<=t;k++)
{
    mem(dp,-1);
   cin>>n>>m;
   long tm=0;
   rep(i,m)
   {
       cin>>r[i];
      long mn=inf;
       rep(j,r[i]) {
           cin>>ar[i][j];
           cmin(mn,ar[i][j]);
       }
       tm+=mn;
   }
   if(tm>n) cout<<"no solution"<<endl;
   else
   cout<<rec(0,0)<<endl;
}
    // file or not???
return 0;
}
