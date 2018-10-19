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

int main()
{
	int a1,b1,n,i,s,t=1,j;
	while(scanf("%d",&n))
	{
		if(n==0)
			break;
		vector<int>q[32];
		int color[32]={0},colr[32];
		long number[32],a,b;
		int m=1;
		for(j=0;j<n;j++)
		{
			scanf("%ld%ld",&a,&b);
			for(i=1;i<m;i++)
				if(number[i]==a)
					break;
				if(i==m)
				{
					number[i]=a;
					m=m+1;
				}
				a1=i;
				for(i=0;i<m;i++)
					if(number[i]==b)
						break;
				if(i==m)
				{
					number[i]=b;
					m=m+1;
				}
				b1=i;
         //    printf("%d %d\n",a1,b1);
			q[a1].push_back(b1);
			q[b1].push_back(a1);
			color[a1]=1;
			color[b1]=1;
		}
		while(scanf("%ld%d",&a,&b))
		{
			if(a==0&&b==0)
				break;
			for(i=1;i<m;i++)
				if(number[i]==a)
				{
					a1=i;
					break;
				}
			//	printf("%d ",a1);
				for(i=0;i<32;i++)
					colr[i]=color[i];
				queue<int>temp;
				temp.push(a1);
				s=0;
				int cu[32]={0};
				cu[0]=1;
				while(temp.size()!=0)
				{

					if(cu[s]==0)
						s=s+1;
						 //printf("s=%d\n",s);
					if(s>b)
						break;
					int u=temp.front();
					temp.pop();
					cu[s]=cu[s]-1;
					if(colr[u]!=0)
					{
						colr[u]=0;
						for(i=0;i<q[u].size();i++)
						{
							int v=q[u][i];
							temp.push(v);
							cu[s+1]=cu[s+1]+1;
						}
					}
				}
				s=0;
				for(i=0;i<32;i++)
					s=s+colr[i];
				printf("Case %d: %d nodes not reachable from node %ld with TTL = %d.\n",t,s,a,b);
			t=t+1;
		}

	}
	return 0;
}
