#include<stdio.h>
int main()
{
	int a,b,x,y;
		scanf(" %d%d",&a,&b);
		if(b>a)
		{
			x=b-a;
			printf(" %d",x);
		}
		else
		{
			y=a-b;
			printf("%d",y);
		}
		return 0;	
}