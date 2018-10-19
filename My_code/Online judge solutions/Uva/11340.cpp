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
	int t,test;
	scanf("%d",&test);
	for(t=0;t<test;t++)
	{
	char a[102]={0},line[10001]={0};
	long i,k,j,l,s,m,n,value[100];
	scanf("%ld",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		if(i>0)
			getchar();
		scanf("%c %d",&a[i],&value[i]);
	}
    
	s=0;
	scanf("%ld",&m);
	getchar();
	for(i=0;i<m;i++)
	{
	  gets(line);
	  l=strlen(line);
	  for(j=0;j<l;j++)
	  {
	    for(k=0;k<n;k++)
			if(line[j]==a[k])
			{
			  s=s+value[k];
			}
	  }
	 
	 
	}
	if(s%100>9)
	  printf("%.2lf$\n",s/100.0);
	else
		printf("%d.0%d$\n",s/100,s%100);
	}
return 0;
}