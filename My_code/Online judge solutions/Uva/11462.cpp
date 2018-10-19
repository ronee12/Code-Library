#include<stdio.h>
#include<stdlib.h>
#define siz 2000000
int main()
{
	long n,i,j,*a,p;
			a=(long*)malloc(siz*sizeof(long));
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
			break;
	for(i=0;i<n;i=i+1)
		scanf("%ld",&a[i]);
	for(j=0;j<n-1;j=j+1)
	{
	for(i=0;i<n-1;i=i+1)
	{
		if(a[i]>a[i+1])
		{
			p=a[i];
		    a[i]=a[i+1];
			a[i+1]=p;
		}
	}
	}
	for(i=0;i<n;i=i+1)
		printf("%ld ",a[i]);
	printf("\n");
	}
return 0;
}