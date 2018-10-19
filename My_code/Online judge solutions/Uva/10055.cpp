#include<stdio.h>
int main()
{
 long int a,b,m,t=0;
   do
	{
		if(a<b)
		{
			m=a;
		    a=b;
			b=m;
		}
          if(t>0)
	       printf("%ld\n",a-b);
		  t=t+1;
	}
   	while(scanf("%ld%ld",&a,&b)!=EOF);
return 0;
}