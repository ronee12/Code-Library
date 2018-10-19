#include<stdio.h>
#include<math.h>
int main()
{
  long long int x,n;
while(scanf("%lld",&n)!=EOF)
{
		x=(n*n*(n+1)*(n+1))/4;
		printf("%lld\n",x);
}
return 0;
}