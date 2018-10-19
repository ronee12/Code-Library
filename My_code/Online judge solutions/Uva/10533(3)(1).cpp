#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define siz 30125
int is_prime(long n)
{
	long i,c=0;
	for(i=3;i*i<=n;i=i+2)
		if(n%i==0)
			return 0;
		while(n!=0)
		{
			c=c+n%10;
			n=n/10;
		}
		
		if(c==2)
			return 1;
		else if(c%2==0)
			return 0;
		for(i=3;i*i<=c;i=i+2)
		if(c%i==0)
			return 0;
		return 1;
}

int main()
		{
				long j,i,d;
				long *sris;
				sris=(long*)malloc(siz*sizeof(long));
				sris[0]=2;
				d=1;
				for(j=3;j<1000000;j=j+2)
				{
				
					if(is_prime(j)==1)
					{
						sris[d]=j;
						d=d+1;
					}
				}
			
long t,l,b,m,u,lb=0,ub;
scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld%ld",&l,&u);
		
		b=0;
		j=d-1;
		m=(b+j)/2;
		
		if(sris[d-1]<l)
			{
				m=d-1;
			}
		else
		{
		while(b<=j)
		{
			if(sris[m]>l)
			{
				j=m-1;
				lb=m;
			}
			else if(sris[m]==l)
			{
				lb=m;
				break;
			}
			else
			{
				b=m+1;
				lb=m;
			}
			m=(b+j)/2;
		
		}
		} 
		if(sris[lb]<l)
			lb=lb+1;
		b=lb-1;j=d-1;
		m=(b+j)/2;
		while(b<=j)
		{
			
			if(sris[m]>u)
			{
				j=m-1;
				ub=j;
			}
			else if(sris[m]==u)
			{
				ub=m;
				break;
			}
			else
			{
				ub=m;
				b=m+1;
			}
			m=(b+j)/2;
		}
		if(sris[ub]>u)
			ub=ub-1;
		
		printf("%ld\n",ub-lb+1);
	}
		return 0;
	}
