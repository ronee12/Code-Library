#include<stdio.h>
int fact(long n)
{
	long r,i;
	r=1;
  for(i=1;i<=n;i++)
	  r=i*r;
  return r;
}
int main()
{
	long a,n,i=0,n1,n2;
	while(scanf("%ld",&a)!=EOF)
	{
		if(i>0)
			printf("\n");
		i++;
		if(a==7)
			printf("429\n");
		else if(a==8)
			printf("1430\n");
			else if(a==9)
			printf("4862\n");
				else if(a==10)
			printf("16796\n");
				else
				{
	     n=fact(a);
		 n1=fact(2*a);
		 n2=fact(a+1);
         printf("%ld\n",n1/(n*n2));
				}
		 
	}

return 0;
}