#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(int n)
{
	int i;
	if(n==2)
		return 1;
for (i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}
int main()
{  
long int a,k,d;
     while(scanf("%ld",&a)!=EOF)
	 {
		 d=0;
		 if(a==0)
			 break;
		 k=a;
		 if(a<0)
		 {
              d=1;
			  a=((-1)*a);
		 }
long int i,m[100000],n=0;
	while(is_prime(a)!=1)
	{
	  for(i=2;i<=sqrt(a);i++)
		  if(a%i==0)
		  {
		   a=a/i;
		   m[n]=i;
		   n=n+1;
		   break;
		  }
	}
	printf("%ld =",k);
        if(d==1)
			printf(" -1 x");
	for(i=0;i<n;i++)
         printf(" %ld x",m[i]);
	printf(" %ld\n",a);
	 }

return 0;
}