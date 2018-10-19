#include<stdio.h>
int main()
{
	long int n,a[100]={0},i,c;
	while(scanf("%ld",&n)!=EOF)
	{
		i=0;
		c=0;
		if(n<0)
			break;
		if(n==0)
			printf("0");
	while(n!=0)
	{
	a[i]=n%3;
	n=n/3;
	c=c+1;
	i=i+1;
	}
	for(i=c-1;i>=0;i--)
		printf("%ld",a[i]);
	printf("\n");
	}
return 0;
}