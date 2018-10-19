#include<stdio.h>
int main()
{
	long long int m;
	while(scanf("%lld",&m)!=EOF)
	{
	 long long int n=1,i,p=0,x,y=0;
	if(m==-1)
        break;
	for(i=0;i<=m;i++)
	{
	   n=n+p;
	   y=n+y;
	   x=n;
	   n=p;
	   p=x;
	}
	printf("%lld %lld\n",y-p,y);
	}
return 0;
}