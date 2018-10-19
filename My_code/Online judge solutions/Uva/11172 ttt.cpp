#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{

	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
		printf(">\n");
	else if(a<b)
         printf("<\n");
	else
		printf("=\n");
	}
return 0;
}
