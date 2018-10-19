#include<stdio.h>
int main()
{
	int s,d,n;
		while(scanf("%d%d",&s,&d)!=EOF)
		{
			n=0;
		  while(d>n)
		  {
		     n=n+s;
			 s=s+1;
		  }
		  printf("%d\n",s-1);
		}
return 0;
}