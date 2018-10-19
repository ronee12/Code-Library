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
	int t,test;
	scanf("%d",&test);
	getchar();
	for(t=0;t<test;t++)
	{
	char a[101]={0},b[101]={0},s2[101]={0},s5[101]={0},s3[101]={0},s4[101]={0};
	int la,lb,l,j,i,k,m;
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	i=0;
	while(a[i]!='<')
	{
	  printf("%c",a[i]);
	  i++;
	}
	i=i+1;
	j=0;
	while(a[i]!='>')
	{
	  printf("%c",a[i]);
	  s2[j]=a[i];
	  j++;
	  i++;
	  if(i==la)
		  break;
	}
	i=i+1;
	k=0;
	while(a[i]!='<')
	{
	  printf("%c",a[i]);
	  s3[k]=a[i];
	  k++;
	  i++;
	}
	i=i+1;
	l=0;
   	while(a[i]!='>')
	{
	  printf("%c",a[i]);
	  s4[l]=a[i];
	  l++;
	  i++;
	}
	i=i+1;
	m=0;
	while(i!=la)
	{
	  printf("%c",a[i]);
	  s5[m]=a[i];
	  m++;
	  i++;
	}
	printf("\n");
	i=0;
	while(b[i]!='.')
	{
	  printf("%c",b[i]);
	  i++;
	}
	printf("%s%s%s%s\n",s4,s3,s2,s5);
	}

return 0;
}