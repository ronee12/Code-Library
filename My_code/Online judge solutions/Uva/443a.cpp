#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 2000000000
/*int is_prime(int n)
{
	int i;
	if(n==2)
		return 1;
for (i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}*/
int main()
{  
    long int i,m,v=0,j;
	char *prime;
	prime=(char*)malloc(max*sizeof(char));
	m=sqrt(max)+1;
	for(i=2;i<=m;i++)
	{
		if(prime[i]!=1)
		{
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			}
		}
	
	}

long int a=1,k,d,x[6000],p;
j=1;
     //while(scanf("%ld",&a)!=EOF)
 for(p=1;p<=200;p++)
	 {
		 d=0;
		 a=p;
		// k=a;
long int i,m[100000],n=0,c=0;
	while(prime[a]==1)
	{
	  for(i=2;i<=sqrt(a);i++)
		  if(a%i==0)
		  {
		   a=a/i;
		   if(i>7)
		     c=1;
		   break;
		  }
        if(c==1)
			break;
	}
	if(c==0&&a<=7)
	{
		printf("%d ",p);
		x[j]=p;
	j=j+1;
	}
	//printf("%d\n",c);
	 }
int nn;
while(scanf("%ld",&nn)!=EOF)
printf("%ld\n",x[nn]);
   
return 0;
}