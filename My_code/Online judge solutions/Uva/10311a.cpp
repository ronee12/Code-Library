#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 100000005
#define siz 3001135
int main()
{
	long int i,m,j,v=0;
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
//	printf("g");
	long int p,nn,x,c;
while(scanf("%ld",&nn)!=EOF)
{
    if(nn%2!=0)
	  if(prime[nn-2]!=1&&nn>4)
             printf("%ld is the sum of 2 and %ld.\n",nn,nn-2);
	  	else
		printf("%ld is not the sum of two primes!\n",nn);

	else
	{
	 p=nn/2;
	 if(p%2==0)
		 p++;
	c=0;
	while(p<=nn)
	{
        if(prime[p]!=1)
		{
	   x=(nn-p);
	   if(p!=x)
	   if(prime[x]!=1&&x>=2)
	   {
		   c=1;
		   break;
	   }
		}
		p=p+2;
	}
	if(c==1&&nn>4)
		if(p>x)
	  printf("%ld is the sum of %ld and %ld.\n",nn,x,p);
		else
			 printf("%ld is the sum of %ld and %ld.\n",nn,p,x);
	else
		printf("%ld is not the sum of two primes!\n",nn);
	}
}
return 0;
}
