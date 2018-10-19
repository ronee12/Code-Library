#include<stdio.h>
int main()
{
	int n,x;
		while(scanf("%d",&n)!=EOF)
		{
			if(n==0)
				break;
	if(n<=100)
		printf("f91(%d) = 91\n",n);
	else
	{
		x=n-10;
	printf("f91(%d) = %d\n",n,x);
	}
		}
return 0;
}