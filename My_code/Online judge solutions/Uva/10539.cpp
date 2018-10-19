#include<stdio.h>
#include<math.h>
int main()
{
    long int t,ts,k,m,n;
	scanf("%d",&ts);
	for(t=0;t<ts;t++)
	{
	  scanf("%ld %ld",&n,&k);
		  if(n==1)
		  { 
			  m=k;
			  do
			  {
				  m=pow(m,2);
				  if(m>9)
					  m=m/10;
				  if(m==9)
					  break;
			  }
		    while(k!=m);
		  }
		  printf("%ld\n",m);
	  
	}
return 0;
}
/*	double a,x;
	a=pow(99999999,2);
	printf("%lf\n",a);
	long p;
	x=a/10000000;
	p=x;
	printf("%ld",p);*/