#include<stdio.h>
int main()
{
	int a,j=0,i;
	scanf("%d",&a);
	do
	{
		j=0;
		while(a!=0)
		{
	       i=a%10;
		   j=j+i;
           a=a/10;
		}
		a=j;
	}
	while(a>10);
	printf("%d\n",a);
return 0;
}