#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{  
	long j,i,u=1,s_prime[200]={0};
	char prime[200]={0};
	for(i=2;i<=105;i++)
	{
		if(prime[i]!=1)
		{
			s_prime[u]=i;
			u++;
			j=i;
			while((j+i)<=105)
			{
				j=j+i;
				prime[j]=1;
			}
		}
		
	}
	long int a,k,x;
	while(scanf("%ld",&a)!=EOF)
	{
		if(a==0)
			break;
		x=a;
		k=a;
		long int max=0;
		long int i,n=0,c[205]={0};
		while(k!=1)
		{
			a=k;
			while(prime[a]==1)
			{
				for(i=2;i<=sqrt(a);i++)
					if(a%i==0)
					{
						a=a/i;
						if(i>max)
							max=i;
						c[i]=c[i]+1;
						break;
					}
			}
			if(a>=max)
				max=a;
			c[a]=c[a]+1;
			k--;
		}
		i=1;
		printf("%3ld! =",x);
		while(s_prime[i]<=max)
		{
			if(i%16==0)
				printf("\n%9ld",c[s_prime[i]]);
			else
				printf("%3ld",c[s_prime[i]]);
			i++;
		}
		printf("\n");
	}
	return 0;
}
