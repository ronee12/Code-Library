#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define REP(i,n) for(__typeof(n) i=0; i<(n); i++)
#define REP2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define INF (1<<30)
#define PI 3.14159265358979323846264338327950
#define PB(x) push_back(x)
#define ALL(x) x.begin(),x.end()
#define SZ size()
#define eps 1e-9
#define VI vector<int>
#define VS vector<string>
#define LL long long
#define MII map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)

using namespace std;
//Polya-Burnside theory : (n^6+3n^4+12n^3+8n^2)/24
double area_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double a;
    a=x1*(y2-y3)+y1*(x3-x2)+((x2*y3)-(y2*x3))+eps;
    a=a/2+eps;
return a;
}
double dist_2point(long x1,long y1,long x2,long y2)
{
    double  d;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return d;
}
int binary_search(int a[],int n,int l,int u)
{
	int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  binary_search(a,n,l,mid-1);
	  else
	  binary_search(a,n,mid+1,u);
}
int gcd(int a,int b)
{
while(b>0)
{
a=a%b;
a=a^b;
b=b^a;
a=a^b;
}
return a;
}
long lcm(long a,long b)
{
    long x=(a*b)/gcd(a,b);
    return x;
}
long is_prime(long n)
{
	long ii;
if (n == 1)
 return 0;
if (n == 2)
 return 1;
if (n%2 == 0)
 return 0;
for (ii=3;ii*ii<=n;ii=ii+2)
     if (n%ii == 0)
           return 0;
return 1;
}
class fun
{
public:
	int n, k;
	vector < vector<int> > g;
	vector<int> pairs_of_right, pairs_of_left;
	vector<bool> used;
	bool kuhn (int v)
	{
		if (used[v])  return false;
		used[v] = true;
		for (int i = 0; i < (int)g[v].size(); ++i)
		{
			int to = g[v][i]-n;
			if (pairs_of_right[to] == -1 || kuhn (pairs_of_right[to]))
			{
				pairs_of_right[to] = v;
				pairs_of_left[v] = to;
				return true;
			}
		}
		return false;
	}

	vector<pair<int, int> > find_max_matching(vector<vector<int> > &_g, int _n, int _k)
	{
		g = _g;
		n = _n;
		k = _k;
		pairs_of_right = vector<int> (k, -1);
		pairs_of_left = vector<int> (n, -1);
		used = vector<bool> (n, false);
		bool path_found;
		do {
			fill(used.begin(), used.end(), false);
			path_found = false;
			for (int i = 0; i < n; ++i)
				if (pairs_of_left[i] < 0 && !used[i])
					path_found |= kuhn (i);
		} while (path_found);
		vector<pair<int, int> > res;
		for(int i = 0; i < k; i++)
			if(pairs_of_right[i] != -1)
				res.push_back(make_pair(pairs_of_right[i], i+n));
		return res;
	}
};


int main()
{
    int tc,h;
    scanf("%d",&tc);
    for(h=0;h<tc;h++)
    {
long p,k,x,y,b=0,r=0;
string str;
scanf("%ld %ld",&p,&k);
double vb[102][3];
double vr[102][3];
vector< vector<int > > vc(200);

for(int i=0;i<p;i++)
{
    scanf("%ld %ld",&x,&y);
    cin>>str;
    if(str=="blue")
    {
           vb[b][0]=x;
           vb[b][1]=y;
           b++;
    }
    else
    {
        vr[r][0]=x;
        vr[r][1]=y;
        r++;
    }
}
long long low=0,upr=1000000000000,res=1000000000000;
while(low<upr)
{
       long long mid=(low+upr)/2;
       for(int j=0;j<b;j++)
       {
           vc[j].clear();
           for(int l=0;l<r;l++)
               if(dist_2point(vb[j][0],vb[j][1],vr[l][0],vr[l][1])<=mid)
                     vc[j].push_back(b+l);

       }
       int fl=0;
       fun x;
       long nmat=x.find_max_matching(vc,b,r).size();
       if(nmat>=k)
       {
           if(mid<res)
           {
               res=mid;
               upr=mid;
               fl=1;
           }
       }
          if(fl==0)
          low=mid+1;
}
if(res<1000000000000)
printf("%lld\n",res);
else printf("Impossible\n");
    }
return 0;
}
