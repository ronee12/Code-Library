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
	long i,l,j,m,n,t=1,y;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		char keywords[25][25]={0},line[25][75]={0},res[25][75]={0};
	  for(i=0;i<n;i++)
		  scanf("%s",keywords[i]);
	  getchar();
	  int x=0,num[100]={0},max=0;;
	  for(i=0;i<m;i++)
	  {
	    gets(line[i]);
		strcpy(res[i],line[i]);
		l=strlen(line[i]);
		for(y=0;y<l;y++)
			if(isupper(line[i][y]))
				line[i][y]=line[i][y]+32;
		int c=0;
		for(j=0;j<l;j++)
              if(isalpha(line[i][j]))
			  {
			int p,k=0;
				  char word[100]={0};
			    while(isalpha(line[i][j]))
				{
				  word[k]=line[i][j];
				  j++;
				  k++;
				  if(j==l)
					  break;
				}
               for(p=0;p<n;p++)
				   if(strcmp(keywords[p],word)==0)
					   c++;
			  }
			  num[x]=c;
			  if(c>max)
				  max=c;
			  x++;
	  }
   printf("Excuse Set #%d\n",t);
   t++;
	  for(i=0;i<m;i++)
		  if(num[i]==max)
			  printf("%s\n",res[i]);
		  printf("\n");

	}
 return 0;
}