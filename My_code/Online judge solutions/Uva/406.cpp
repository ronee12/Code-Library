#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
for ( i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}
int main()
{
	long n,c,i,a[11001],t;
	while(scanf("%ld%ld",&n,&c)!=EOF)
	{
		 long m=0,k,j,y;
	  for(i=1;i<=n;i++)
		  if(is_prime(i)==1)
		  {
		  a[m]=i;
		  m=m+1;
		  }
		  k=(m-(2*c))/2;
		  if(m%2!=0)
			  k=k+1;
		  if(k<0)
			  k=0;
		  	if(n==1&&c==1)
				k=k-1;
		  printf("%ld %ld: ",n,c);
		  	if(m%2==0)
				y=2*c;
			else 
				y=2*c-1;
			t=0;
			if(y>=m)
			{
               
				   for(i=0;i<m;i++)
				   { if(t>0)
					   printf(" ");
				   t=t+1;
					   printf("%ld",a[i]);
				   }
				   	//printf("\n\n");
			}
			else
			{
		    t=0;
		  if(m%2==0)
               for(j=k;j<k+(2*c);j++)
			   {
				   if(t>0)
					   printf(" ");
				   t=t+1;
			  printf("%ld",a[j]);
			   }
		  else
			  for(j=k;j<k+(2*c-1);j++)
			  {
				  if(t>0)
					   printf(" ");
				   t=t+1;
			  printf("%ld",a[j]);
			  }
		printf("\n\n");
			}
	}
return 0;
}