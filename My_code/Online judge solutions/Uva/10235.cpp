#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	if(n==1)
		return 0;
for (i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}
int main()
{
 long int x,m,r,k;
 while(scanf("%ld",&x)!=EOF)
 {
 k=x;
 m=0;
 if(is_prime(x)==1)
 {
  while(x!=0)
  {
    r=x%10;
	x=x/10;
	m=m*10+r;
  }
  if(m==k)
        printf("%ld is prime.\n",k);
  else if(is_prime(m)==1)
	  printf("%ld is emirp.\n",k);
  else
	  printf("%ld is prime.\n",k);
 }
 else
	 printf("%ld is not prime.\n",k);
 }
 return 0;
}