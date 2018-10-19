#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long i,k,n;
  while(scanf("%ld %ld",&n,&k)!=EOF)
  {
	 
	  double d=0;
    for(i=1;i<=k;i++)
		d=d+(log(n-i+1)-log(i))/log(10);
	printf("%.lf\n",floor(d)+1);
  }

return 0;
}
