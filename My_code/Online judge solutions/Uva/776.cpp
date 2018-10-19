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
	int i,p,k=1,l,j;
	char a[200],s[100];
	while(gets(a))
	{
		if(a[0]=='%')
		{
		  printf("%c\n",'%');
		  k=1;
		}
		else
		{
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(isalpha(a[j]))
			{
				p=0;
				for(i=1;i<k;i++)
					if(a[j]==s[i])
					{
						p=1;
						printf(" %d",i);
						break;
					}
					if(p==0)
					{
						s[k]=a[j];
						printf(" %d",k);
						k++;
					}
			}
		}
		printf("\n");
		}
	}
	return 0;
}
