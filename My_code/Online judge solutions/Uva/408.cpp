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
	long m,n,a,b,temp;
     while(scanf("%ld%ld",&m,&n)==2)
	 {
	   if(m>n)
	   {
	     a=n;
		 b=m;
	   }
	   else
	   {
	    a=m;
		b=n;
	   }
	   while(a>=1)
	   {
	     temp=a;
		 a=b%a;
		 b=temp;
	   }
	   if(b==1)
		   printf("%10ld%10ld    Good Choice\n",m,n);
	   else
		   printf("%10ld%10ld    Bad Choice\n",m,n);
	   printf("\n");
	 }
return 0;
}