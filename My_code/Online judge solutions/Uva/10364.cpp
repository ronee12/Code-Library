/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include <bits/stdc++.h>

using namespace std;
#define inf           100000000000000000LL
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
void init()
{

}
long dp[(1LL<<20)+5],avr,ar[30],n;
int rec(long mask,long goal,int c)
{
    if(goal==avr)
    {
        c++;
        if(c==4) return 1;
        goal=0;
    }
    if(goal>avr) return 0;
    if(mask==(1LL<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int r1=0;
    rep(j,n)
    {
        if((mask&(1LL<<j))==0)
        {
            r1  = r1 | rec(mask|(1LL<<j),goal+ar[j],c);
            if(r1) return 1;
        }
    }
    return dp[mask] = r1;
}
int main()
{
ios_base::sync_with_stdio(false);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
long t,kase;
cin>>t;
for(kase=1;kase<=t;kase++)
{

   cin>>n;
   long s=0;
   rep(i,n)
   {
       cin>>ar[i];
       s+=ar[i];
   }
   if(s%4==0)
   {
       avr=s/4;
       mem(dp,-1);
       if(rec(0,0,0)) cout<<"yes\n";
       else cout<<"no\n";
   }
   else cout<<"no\n";

}


return 0;
}
