#include<stdio.h>
#include<math.h>
int main()
{
	long i,A,B,n,sum,sum1,p,k,a[200];
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
			break;
		A=0;
		B=0;
		p=0;
	  for(i=0;i<n;i++)
		  scanf("%ld",&a[i]);
	  k=a[0];
	  sum=k;
       for(i=0;i<n;i++)
	   {
		 sum1=sum+a[i+1];
		 if(sum>=sum1||i==n)
		 {
		   if(sum<0)
			   sum=sum*(-1);
		   p++;
		   if(p%2!=0)
		   A=A+sum;
		   else
			   B=B+sum;
		   sum=a[i+1];
		 }
		 else
		 {
		   sum=sum1;
		 }

	   }
	   printf("%ld %ld\n",A,B);
	}
		return 0;
}