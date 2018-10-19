#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define siz 5000000
int main()
{
	long *a,*b,*c,*d,*x;
	a=(long*)malloc(siz*sizeof(long));
	b=(long*)malloc(siz*sizeof(long));
	c=(long*)malloc(siz*sizeof(long));
	d=(long*)malloc(siz*sizeof(long));
	x=(long*)malloc(siz*sizeof(long));
	long int t,tt;
	scanf("%ld",&t);
				printf("\n");
	for(tt=0;tt<t;tt++)
	{

		*a=0;
		*b=0;
		*c=0;
		*d=0;
		*x=0;
	long int n,i,temp,j,cc;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	  scanf("%ld%ld",&c[i],&b[i]);
//	printf("\n");
	for(i=n;i>0;i--)
	{
          a[n-i]=c[i-1];
          d[n-i]=b[i-1];
	}
		i=0;
	temp=0;
	do
	{
	temp=a[i]+d[i]+temp;
    x[i]=temp%10;
    temp=temp/10;
	i=i+1;
	}
	while(i!=n);
	if(temp!=0)
	{
		x[i]=temp;
		n=n+1;
	}
/*	printf("\n");*/
	cc=0;
	for(i=0;i<n;i++)
	{
	  if(x[i]==0)
		  cc=cc+1;
	}
	if(cc==n)
	  printf("0");
    else
  {
   for(j=n-1;j>=0;j--)
		if(x[j]>0)
         for(;j>=0;j--)
           printf("%ld",x[j]);
  }
/*	for(j=n-1;j>=0;j--)
	printf("%ld",x[j]);*/
	printf("\n");
		printf("\n");
	}
	return 0;
}