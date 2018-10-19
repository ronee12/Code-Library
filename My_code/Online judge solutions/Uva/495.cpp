#include<stdio.h>
int main()
{
	long int m;
	while(scanf("%ld",&m)!=EOF)
	{
	long int n=1,i,p=0,x;
	for(i=0;i<=m;i++)
	{
	   n=n+p;
	   x=n;
	   n=p;
	   p=x;
	}
	printf("%ld\n",n);
	}
return 0;
}