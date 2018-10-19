#include<stdio.h>
#include<math.h>
#define max 5000020
int prime[max]={0};
void chak_prime()
{
		
	long int i,j,m;
	m=max/2+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]==0)
		{
			j=i;
			while(j<=max-2)
			{				
				j=j+i;
				prime[j]=2;
			}
		}
		
	}
	
}
int main()
{
	chak_prime();	
	long int k,j,i,l,u;
    for(k=2; k<max-10; k++)
	{
		j=k;
		long int i,n=0,s=0;
		while(prime[j]>=2)
		{
			for(i=2;i<=sqrt(j);i++)
				if(j%i==0)
				{
					j=j/i;
					if(n!=i)
						s=s+i;
					n=i;
					break;
				}
		}
		if(n!=j)
			s=s+j;
		if(prime[s]<2)
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
	
	return 0;
}
