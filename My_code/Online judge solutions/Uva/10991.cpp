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
	int t,i;
	scanf("%d",&t);
		for(i=0;i<t;i++)
		{
	double r1,r2,r3,a1,a2,a3,t1,t2,t3,area,a,b,c,s;
   scanf("%lf%lf%lf",&r1,&r2,&r3);
   a=r1+r2;
   b=r2+r3;
   c=r3+r1;
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
    t1=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
   a1=(t1*r1*r1)/2.0;
    t2=acos(((b*b)+(a*a)-(c*c))/(2*b*a));
   a2=(t2*r2*r2)/2.0;
   t3=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
   a3=(t3*r3*r3)/2.0;
   printf("%lf\n",area-(a1+a2+a3));
		}

return 0;
}