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
long int a,x,d;
     while(scanf("%ld",&a)!=EOF)
	 {
		 if(a==0)
			 break;
		 x=a;
		 d=0;
		 if(a==0)
			 break;
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
	m[n]=a;
     
long int k,c=0,j;
	for(j=0;j<=n;j++)
	{
		k=0;
	  for(i=0;i<j;i++)
		  if(m[j]==m[i])
			  k=1;
       if(k==0)
		   c=c+1;
	}
	printf("%ld : %ld\n",x,c);
	 }

return 0;
}