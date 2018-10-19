#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	long int n,i,a,m,t=0;
		while(scanf("%ld",&n)!=EOF)
		{
			if(t==0)
				printf("PERFECTION OUTPUT\n");
			t=1;
			if(n==0)
			{
				printf("END OF OUTPUT\n");
				break;
			}
			m=0;
	for(i=2;i<=sqrt(n);i++)
           if(n%i==0)
		   {
			   a=n/i;
			   if(a==i)
				   a=0;
			   m=m+a+i;
		   }
		   if(n>1)
		   m=m+1;
		   if(m==n)
			   printf("%5ld  PERFECT\n",n);
		   else if(m<n)
			   printf("%5ld  DEFICIENT\n",n);
		   else
			   printf("%5ld  ABUNDANT\n",n);
		}
return 0;
}