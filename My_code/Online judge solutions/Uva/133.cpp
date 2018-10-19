#include<stdio.h>
int main()
{
	int a,j=0,i;
	scanf("%d",&a);
	do
	{
	    do
		{
	       i=a%10;
           a=a/10;
	       j=j+i;
		}while(a!=0);
		a=j;
		if(j<10)
        printf("%d\n",j);
	}
	while(j>10);
	printf("%d\n",a);
return 0;
}