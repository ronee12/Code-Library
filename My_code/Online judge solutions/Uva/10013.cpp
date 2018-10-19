#include<stdio.h>
int main()
{
	int i,a[100],b[100],n,temp,j,x[100];
		scanf("%d",&n);
	for(i=n;i>0;i--)
		scanf("%d%d",&a[i-1],&b[i-1]);
		i=0;
	temp=0;
	do
	{
	temp=a[i]+b[i]+temp;
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
	printf("%d",x[j]);
return 0;
}