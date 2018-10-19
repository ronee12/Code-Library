using namespace std;
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<assert.h>
#include<limits.h>
#include<float.h>
#include<string>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<map>
#include<vector>
#include<queue>
#include<set>
#include<stack>
#include<list>
#include<utility>
#include<iterator>
#include<iomanip>
#include<limits>

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repv(i,n) for(int i=n-1; i>=0; i--)
#define repl(i,n) for(int i=1; i<=(int)n; i++)
#define replv(i,n) for(int i=n; i>=1; i--)
#define rep2(i,a,b) for(int i=a; i<=b; i++)

#define SZ(a) ((int)a.size())
#define all(a) a.begin(),a.end()
#define REV(a) reverse(all(a))
#define countbit(x) __builtin_popcount(x)
#define _min3(a,b,c) _min(a,_min(b,c))
#define _max3(a,b,c) _max(a,_max(b,c))
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define pi (2*acos(0))
#define mem(a,b) memset(a,b,sizeof a)
#define in(a,x,y) (a>=x && a<=y)
#define eq(a,b) (_abs(a-b)<eps)
#define less(a,b) (a+eps<b)
#define great(a,b) (a>b+eps)
#define INF (1<<28)
#define MOD 1000000007
#define eps 1e-9

#define sdi(x) scanf("%d",&x)
#define sdii(x,y) scanf("%d%d",&x,&y)
#define sds(x) scanf("%s",x)
#define pfi(x) printf("%d\n",x);
#define line puts("")

inline int LEN(string a) {return a.length();}
inline int LEN(char a[]) {return strlen(a);}

typedef long long i64;
typedef unsigned long long ui64;

typedef vector<int> vi;
typedef vector<i64> vi64;
typedef vector<string> vst;
typedef pair<int,int> pii;
typedef pair<i64,i64> pi64;
typedef pair<string,int> psi;
typedef vector<pii> vii;

template< class T > inline T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > inline T _max(T a, T b) { return (a > b ? a : b); }
template< class T > inline T _min(T a, T b) { return (a < b ? a : b); }
template< class T > inline T _sq(T x) { return x * x; }
template< class T > inline T _sqrt(T x) { return (T) sqrt( (double) x); }
template< class T > inline T _pow(T x,T y) {T z=1; repl(i,y){z*=x;} return z; }
template< class T > inline T _gcd(T a,T b) {a=_abs(a);b=_abs(b); if(!b) return a; return _gcd(b,a%b);}
template< class T > inline T _lcm(T a,T b) {a=_abs(a);b=_abs(b); return (a/_gcd(a,b))*b;}
template< class T > inline T _isvowel(T s){s=tolower(s); if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')return 1; return 0;}
template< class T > inline T _isupper(T s) {if(s>='A' and s<='Z') return 1; return 0;}

template< class T > inline T _extended(T a,T b,T &x,T &y) {a=_abs(a);b=_abs(b); T g,x1,y1; if(!b) {x=1;y=0;g=a; return g;} g=_extended(b,a%b,x1,y1); x=y1; y=x1-(a/b)*y1; return g;}
template< class T > inline T _bigmod(T n,T m) {T ans=1,mult=n%MOD; while(m){ if(m & 1) ans=(ans*mult)%MOD; m>>=1; mult=(mult*mult)%MOD; } ans%=MOD; return ans;}
template< class T > inline T _modinv(T x) {return _bigmod(x,(T) (MOD-2))%MOD;}

template< class T > inline T _getbit(T x,T i) { T t=1;return (x&(t<<i)); }
template< class T > inline T _setbit(T x,T i) { T t=1;return (x|(t<<i)); }
template< class T > inline T _resetbit(T x,T i) { T t=1;return (x&(~(t<<i))); }

template< class T > inline T _in(){register char c=0;register T a=0;while(c<33)c=getchar();while(c>33){a=(a*10)+(c-'0');c=getchar();}return a;}
//template< class T > inline T In(){int r=0,c;for(c=getchar_unlocked();c<=32;c=getchar_unlocked());if(c=='-') return -In<T>();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar_unlocked());return r;}

int const mx = 1000005;
int dx[]={0,+1,0,-1};
int dy[]={-1,0,+1,0};
string tostr(i64 n){ostringstream os;os<<n;return os.str();}


inline void _file_rw(){
	#ifndef ONLINE_JUDGE
    if(!freopen("input", "rt", stdin))
    puts("error opening file in "), assert(0);
    //freopen("output", "wt", stdout);
	#endif
}
int tree[mx];
void inorder_walk(int root){
	if(tree[root]){
		inorder_walk(2*root);
		cout<<tree[root]<<" ";
		inorder_walk(2*root+1);
	}
}
void insert(int root, int val){
	if(!tree[root]){
		tree[root]=val;
		return;
	}
	if(val<tree[root])
	insert(2*root,val);
	else insert(2*root+1,val);
}

int search(int root, int val){
	if(!tree[root]) return -1;
	if(val<tree[root]) return search(2*root,val);
	if(val>tree[root]) return search(2*root+1,val);
	return root;
}
int tree_min(int root){
	if(!tree[2*root]) return root;
	return tree_min(2*root);
}
int tree_max(int root){
	if(!tree[2*root+1]) return root;
	return tree_max(2*root+1);
}
int find_inorder_successor(int root){
	if(!tree[2*root]) return root;
	return find_inorder_successor(2*root);
}
void delet(int val){
	int p=search(1,val);
	if(p){
		if(!tree[2*p] and !tree[2*p+1]){
			tree[p]=0;
			return;
		}
		else if(tree[2*p] and !tree[2*p+1]){
			tree[p]=tree[2*p];
			tree[2*p]=0;
			return;
		}
		else if(!tree[2*p] and tree[2*p+1]){
			tree[p]=tree[2*p+1];
			tree[2*p+1]=0;
			return;
		}
		else{
			int successor=find_inorder_successor(2*p+1);
			tree[p]=tree[successor];
			tree[successor]=0;
		}
	}
}
int main(){
	int n;
	cin>>n;
	rep(i,n){
		int x;
		cin>>x;
		insert(1,x);
	}
	repl(i,11) cout<<tree[i]<<" ";
	delet(12);
	line;
	repl(i,11) cout<<tree[i]<<" ";
	return 0;
}
