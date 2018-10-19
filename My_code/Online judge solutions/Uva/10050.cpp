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
int main()
{
	int test,m;
	scanf("%d",&test);
	for(m=0;m<test;m++)
	{
	int n,t,a[102],c,x,k,j,i,ax;
     scanf("%d",&n);
	 scanf("%d",&t);
	 c=0;
	 for(i=0;i<t;i++)
	 {
	   scanf("%d",&a[i]);
	   x=1;
	   ax=1;
	   while(x*a[i]<=n)
	   {
	     ax=x*a[i];
		 k=0;
		 for(j=0;j<i;j++)
			 if(ax%a[j]==0)
			 {
				 k=1;
				  break;
			 }
         if(k==0)
			 if((ax+1)%7!=0)
				 if(ax%7!=0)
					 c++;
				 
				 x++;
	   }
	 }
	   printf("%d\n",c);
	   }
return 0;
}