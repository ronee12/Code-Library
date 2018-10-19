#include<stdio.h>
int main()
{
	int m,t;
	scanf("%d",&t);
	for(m=0;m<t;m++)
	{
	int n,a[1000],i,j,c,s;
	scanf("%d",&n);
		c=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
		{
		if(a[j]>a[j+1])
		{
			c=c+1;
			s=a[j];
		    a[j]=a[j+1];
			a[j+1]=s;
		}
		}
		printf("Optimal train swapping takes %d swaps.\n",c);
	}
return 0;
}