#include<stdio.h>
#include<math.h>
int main()
{
	       long long int i,n,a,p;
		while(scanf("%lld%lld",&n,&a)!=EOF)
		{
			p=0;
			i=1;
		while(n>=i)
		{
		p=p+i*pow(a,i);
		i=i+1;
		}
		printf("%lld\n",p);
		}
return 0;
}