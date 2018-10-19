#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{
	long long int n,r;
while(scanf("%lld%lld",&n,&r)!=EOF)
{
    long long res=1,i;
  for(i=n;i>=n-r+1;i--)
  {
     res=res*i;
     while(res%10==0)
         res/=10;
     res=res%100000000;
  }
  printf("%d\n",res%10);
}
return 0;
}

