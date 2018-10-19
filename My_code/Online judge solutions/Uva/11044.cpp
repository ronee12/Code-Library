#include<stdio.h>
int main()
{
	int m,n,x,i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d%d",&m,&n);
	printf("%d\n",((int)m/3)*((int)n/3));
	}
return 0;
}