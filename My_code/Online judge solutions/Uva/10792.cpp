#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<cassert>
#include<climits>
#include<complex>
using namespace std;

double x,d,m,re,h,a,a1;
double pi=acos(0.0);
double eps=1e-6;


int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%lf %lf %lf",&x,&d,&m);
	re=2*(sqrt(x*x-(x-d)*(x-d)));
	a=asin((x-m)/x);
	a1=asin((x-d)/x);
	h=m+re*sin(a-a1);
	printf("Case %d: %.4f\n",i+1,h);
	}
}
