#include<stdio.h>
#include<math.h>
int main()
{
	long long n,i,m;
	
	while(scanf("%lld%lld",&n,&m)!=EOF)
	{
		long long a=0,b=1,c;
		m=pow(2,m);	
		if(m>1)
		{
		for(i=1;i<n;i++)
		{
		c=a+b;
		a=b;
		b=c%m;
		if(a==0)
			if(b==1)
			{
				if(n%i==0)
				{
					b=0;
				break;
				}
				i=n-n%i;
				
			}
		}
		}
		else
			b=0;
		if(n==0)
			b=0;
		printf("%lld\n",b);
		
	}
	return 0;
}