#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 5000003
char prime[max]={0};
void chak_prime()
{

	long int i,j;
	/*//for(i=0;i<max;i++)
	//prime[i]=0;*/
	for(i=2;i<=max-2;i++)
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

	/*//char *prime;
	//prime=(char*)malloc(max*sizeof(char));*/
	chak_prime();

	long int k,j,i,l,u,m[2000];
    for(k=2; k<=max; k++)
	{
		j=k;
		long int i,n=0,s;
		while(prime[j]>=2)
		{
			for(i=2;i<=sqrt(j);i++)
				if(j%i==0)
				{
					j=j/i;
					m[n]=i;
					n=n+1;
					break;
				}
		}
		m[n]=j;
		s=0;
		for(i=0; i<=n; i++)
			if(m[i]!=m[i+1])
			s=s+m[i];
		if(prime[s]<2)
		{

			prime[k]=prime[k]+1;
		}
	}
	/*for(i=2;i<max-2;i++)
		printf("%d ",prime[i]);*/

	while(scanf("%ld",&l)!=EOF)
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
