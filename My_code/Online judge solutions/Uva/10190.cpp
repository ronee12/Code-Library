#include<stdio.h>
#include<math.h>
int main()
{
	long int a,b,c[100000],aa;
	while(scanf("%ld%ld",&a,&b)!=EOF)
	{
		long int i=0,t=0,j;
		aa=a;
		if(b==1 || a==1 ||a==0 ||b==0)
			 printf("Boring!\n");
		else
		{
	            while(a!=1)
				{
					   if(a%b!=0)
					   {
					        t=1;
					            break;
					   }
	                   else
					  {
		                   c[i]=a/b;
		                   a=a/b;
		                   i=i+1;
					  }
		             /* else
					  {
			              t=1;
			              break;
					  }*/
				}
	    if(t==1)
		   printf("Boring!\n");
	    else
		{
	           printf("%ld",aa);
	            for(j=0;j<i;j++)
		         printf(" %ld",c[j]);
	          printf("\n");
		}
		} 
	}
return 0;
}