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
int main()
{
	int a[51],i,p,n,k,m,c;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		int store[100]={0};
		c=0;
		p=n;
		for(i=1;i<=n;i++)
			a[i]=i;
		m=n;
		int t=0;
		t=n;
		int x=0,z=0;;
		while(t!=0)
		{
			int cc=0;
			if(c==0)
			{
				for(i=1,k=1;i<=t;i++)
					if(i%2!=0)
					{
						store[z]=a[i];
						z++;
						if(a[i]==m)
							cc=1;
					}
					else
					{
						a[k]=a[i];
						k++;
					}
					if(cc==1)
						c=1;
					else
						c=0;
					m=a[k-1];
					t=k-1;
			}
			else
			{
				for(i=1,k=1;i<=t;i++)
					if(i%2==0)
					{
						store[z]=a[i];
						z++;
						if(a[i]==m)
							cc=1;
					}
					else
					{
						a[k]=a[i];
						k++;
					}
					if(cc==1)	
						c=1;
					else
						c=0;
					t=k-1;
					m=a[k-1];
			}
		}
		printf("Discarded cards:");
		for(i=0;i<z-1;i++)
		{
			if(i>0)
				printf(",");
			printf(" %d",store[i]);
		}
			printf("\n");
		printf("Remaining card: %d\n",store[z-1]);
	
	}
	return 0;
}
