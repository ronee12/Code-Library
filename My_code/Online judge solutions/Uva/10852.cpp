#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
for ( i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}
int main()
{
 long int x,t,i;
 scanf("%ld",&t);
 for(i=0;i<t;i++)
 {
 scanf("%ld",&x);
 x=x/2+1;
 while(is_prime(x)!=1)
 {
   x=x+1;
 }
 printf("%ld\n",x);
 }
 return 0;
}