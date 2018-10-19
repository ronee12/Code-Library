#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,c;
	char x[1000];
		while(gets(x))
		{
			c=0;
			l=strlen(x);
			for(i=0;i<l;i++)
			{
		   if((x[i]>=65 && x[i]<=90) ||(x[i]>=97 && x[i]<=122))
		   {
		   c=c+1;
		   while((x[i]>=65 && x[i]<=90) ||(x[i]>=97 && x[i]<=122))
			   i=i+1;
		   }
			}
		printf("%d\n",c);
		}
return 0;
}