#include<stdio.h>
long gcd(long a,long b)
{
if(a%b==0)
   return b;
else
   gcd(b,a%b);
}
int main()
{
	long int n;
while(scanf("%ld",&n)!=EOF)
{
	long int g=0,i,j;
	if(n==0)
		break;
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
   g=g+gcd(i,j);
 if(n==1)
      {
      
         g=0;
      }
printf("%ld\n",g);
}
return 0;
}