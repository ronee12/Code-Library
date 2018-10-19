#include<stdio.h>
int main()
{
	int c,i,m;
	unsigned long int n[100],a,b,x=0,r;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%ld",&n[i]);
	for(i=0;i<m;i++)
	{
		c=0;
	while(n[i]!=0)
	{
		x=0;
		b=n[i];
	while(n[i]!=0)
	{
	r=n[i]%10;
	n[i]=n[i]/10;
	x=x*10+r;
	}
	if(x==b)
		break;
	c=c+1;
	a=x+b;
	n[i]=a;
	}
	printf("%d %ld\n",c,a);
	}
return 0;
}