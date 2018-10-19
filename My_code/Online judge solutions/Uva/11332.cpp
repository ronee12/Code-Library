#include<stdio.h>
int main()
{
	int m,n,a,x;
	while(scanf("%d",&m)!=EOF)
	{
		if(m==0)
			break;
		while(m>9)
		{
			n=m;
			x=0;
		while(n!=0)
		{
		a=n%10;
		n=n/10;
        x=x+a;
		}
		m=x;
		}
		printf("%d\n",m);
	}
return 0;
}