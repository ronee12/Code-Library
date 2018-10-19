#include<stdio.h>
int main()
{
	long int a,b,x;
		while(scanf("%ld%ld",&a,&b)!=EOF)
		{
		if(b>a)
		{
	       	x=b-a;
		printf("%ld\n",x);
		}
		else
		{
			x=a-b;
			printf("%ld\n",x);
		}
		}
		return 0;	
}