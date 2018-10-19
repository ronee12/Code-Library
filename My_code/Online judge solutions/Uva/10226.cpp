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
#define max 10
int main()
{
int i,j,c[max],n,f,l;
 map<string,int> rs;
 string str,a[10]={0},temp;
// rs.clear();
i=0;
//while(getline(cin,str))
 {
	/* l=str.size();
	if(l==0)
		break;
		if(rs[str]==0)
		{
            a[i++]=str;
            rs[str]=1;
		}
		else {
            rs[str]++;
		}*/
 }
n=i;
 for(i=0;i<n-1;i++)
for(j=0;j<n-1;j++)
if(a[j]>a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
c[0]=0;
f=0;
for(i=0;i<n;i++)
cout<<a[i]<<" ";

double x;
//printf("%s %d\n",a[0],rs[a[0]]);
for(i=0;i<1;i++)
{
	x=c[i];
//printf("%s %.4lf\n",b[i],(x*100)/n);
}

return 0;
}
