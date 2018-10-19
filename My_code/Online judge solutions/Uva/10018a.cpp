#include<stdio.h>
int main()
{
	int x=0,r,c,i,m;
	long int a,n,b;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		c=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		x=0;
		b=n;
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	x=x*10+r;
	}
	if(x==b)
		break;
	c=c+1;
	a=x+b;
	n=a;
	}
	printf("%d %ld\n",c,a);
	}
return 0;
}