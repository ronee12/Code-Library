#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<queue>
#define m 1000001
using namespace std ;
int partition(long int s[], int l, int h)
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
void quicksort(long int s[], int l, int h)
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
	long i,*a,n,p,x;
	a=(long*)malloc(m*sizeof(long));
	while(scanf("%d",&n)!=EOF)
	{
		long c[65537]={0};
	  for(i=0;i<n;i++)
	  {
		  scanf("%ld",&a[i]);
		  c[a[i]]=c[a[i]]+1;
	  }
//	  sort(a,a+n);
	  quicksort(a,0,n-1);
	  if(n%2!=0)
	  {
	   	  p=n/2;
          printf("%ld %ld 1\n",a[p],c[a[p]]);
	  }
	  else
	  {
	    p=n/2-1;
		if(a[p]!=a[p+1])
			x=c[a[p]]+c[a[p+1]];
		else
			x=c[a[p]];
		printf("%ld %ld %ld\n",a[p],x,(a[p+1]-a[p])+1);
	  }

	}
return 0;
}