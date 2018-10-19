#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 5000020
#define pr 348514
int main()
{
char *prime;
	prime=(char*)malloc(max*sizeof(char));
	long int *stor_prime;
	stor_prime=(long*)malloc(max*sizeof(long));
	long int *sum_prime_factor;
	sum_prime_factor=(long*)malloc(max*sizeof(long));
	long int k=0,j,i,l,u=0,m,j_k;
	for(i=0;i<max;i++)
		prime[i]=0;
	
	m=sqrt(max)+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]==0)
		{
			stor_prime[k]=i;
			k=k+1;
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=2;
			}
		}
		
	}
	
	sum_prime_factor[2]=2;

    for(k=2; k<max-19; k++)
	{
		j=k;
		long int i,n=0,s=0;
		if(prime[j]>=2)
		{
			long int sq=sqrt(j);
			i=0;
				while(stor_prime[i]<=sq)
				{
					if(j%stor_prime[i]==0)
					{

						j_k=j/stor_prime[i];
						if(j_k%stor_prime[i]==0)
							sum_prime_factor[j]=sum_prime_factor[j_k];
						else
							sum_prime_factor[j]=sum_prime_factor[j_k]+stor_prime[i];
						break;
					}
					i=i+1;
				}
		}
		else
		{
			sum_prime_factor[k]=k;
		}
		
		
		if(prime[sum_prime_factor[k]]<2)
		{			
			prime[k]=prime[k]+1;
		}
	}
		
	while(scanf("%ld",&l))
	{
		if(l==0)
			break;
		scanf("%ld",&u);
		long int sum=0;
		for(i=l;i<=u;i++)
			sum=sum+prime[i]%2;
		printf("%ld\n",sum);
	}
	/*free(prime);
	free(stor_prime);
	free(sum_prime_factor);*/
	return 0;
}
