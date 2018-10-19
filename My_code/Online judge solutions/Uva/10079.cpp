#include<stdio.h>
int main()
{
long int n,x;
while(scanf("%ld",&n)!=EOF)
{
	if(n<0)
		break;
	x=(n*(n+1)/2)+1;
	printf("%ld\n",x);
}
return 0;
}