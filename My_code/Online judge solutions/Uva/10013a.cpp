#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define siz 3000000
int main()
{
	int t,tt,q=0;
	scanf("%d",&tt);
	for(t=0;t<tt;t++)
	{
                     
		if(q>0)
			printf("\n");
		q=1;
		long *a,*d,*x;
		a=(long*)malloc(siz*sizeof(long));
		d=(long*)malloc(siz*sizeof(long));
		x=(long*)malloc(siz*sizeof(long));
	long i,temp,j,n;
     scanf("%ld",&n);
		for(i=n;i>0;i--)
		scanf("%ld%ld",&a[i-1],&d[i-1]);
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
	for(j=n-1;j>=0;j--)
	printf("%ld",x[j]);
	printf("\n");
	}
return 0;
}
