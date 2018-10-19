#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int partition(int s[], int l, int h)
{
	int i;         /* counter */
		int p;     /* pivot element index */
	int firsthigh; /* divider position for pivot */
	p = h;
	firsthigh = l;
	for (i=l; i<h; i++)
		if (s[i] > s[p])
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
double i,n,s,t,tt;
	int a[20050],m,j;
	scanf("%lf",&t);
	for(tt=0;tt<t;tt++)
	{
	       scanf("%lf",&n);
		   for(m=0;m<n;m++)
			   scanf("%ld",&a[m]);

		 	quicksort(a,0,n-1);
		/*	for(m=0;m<n;m++)
				printf("%d ",a[m]);*/
				   s=0;
				   for(i=0,j=2;i<int (n/3);i++,j=j+3)
					   s=s+a[j];

             printf("%.lf\n",s);
	}
return 0;
}

