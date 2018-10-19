#include <stdio.h>
#include <math.h>

int main()
{
  long n,s,s2,s3,s4,r2,r3,r4;
   while(scanf("%ld",&n) != EOF)
   {
        s=(n*(n+1))/2;
		s2=(n*(n+1)*(2*n+1))/6;
		s4=n*(n+1)*(2*n+1)*(3*n*n+3*n-1)/30;
        s3=s*s;
        r2=s3-s2;
		r3=pow(s,3)-s3;
		r4=pow(s,4)-s4;
		printf("%ld %ld %ld %ld %ld %ld\n",s2,r2,s3,r3,s4,r4);
   }

   return 0;
}