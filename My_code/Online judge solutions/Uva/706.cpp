#include<stdio.h>
#include<string.h>
one(int s)
{
	int i,j;
		for(i=0;i<2;i++)
		{
			for(j=0;j<s;j++)
			printf("|\n");
			printf("\n");
		}
return 0;
}
two(int s)
{
   int i,j;
   for(i=0;i<5;i++)
   {
     for(j=0;j<s;j++)
		 printf("-");
	 	printf("\n");

   }
return 0;
}
int main()
{
	printf("%d",one(2));
	return 0;
}