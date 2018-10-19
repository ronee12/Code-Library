#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<bitset>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int partition(int s[], int l, int h)
{
	int i;         /* counter */
		int p;     /* pivot element index */
	int firsthigh; /* divider position for pivot */
	p = h;
	firsthigh = l;
	for (i=l; i<h; i++)
		if (s[i] < s[p])
		{
			swap(*&s[i],*&s[firsthigh]);
			firsthigh ++;
		}
		swap(*&s[p],*&s[firsthigh]);
		return(firsthigh);
}

void quicksort(int s[], int l, int h)
{
	int p;         /* index of partition */
	if ((h-l)>0)
	{
		p = partition(s,l,h);
		quicksort(s,l,p-1);
		quicksort(s,p+1,h);
	}
}
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	int n,i,a[1000]={0},m,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

		quicksort(a,0,n-1);
		m=a[n/2];
long	s=0;
		for(i=0;i<n;i++)
		{
            x=m-a[i];
			if(x<0)
				x=x*(-1);
			s=s+x;
		}
		printf("%ld\n",s);
	}
return 0;
}