#include<stdio.h>
#include<string.h>
int main()
{
	long test,j;
	scanf("%ld",&test);
	for(j=0;j<test;j++)
	{
	char a[1009];
		int l,i,temp,b,m,x,k=0;
		scanf("%s%d",a,&x);
	for(m=0;m<x;m++)
	{
		scanf("%d",&b);
		l=strlen(a);
		temp=0;
	for(i=0;i<l;i++)
	{
	temp=temp*10+a[i]-48;
	temp=temp%b;
	}
	if(temp!=0)
		k=1;
	}
	if(k==0)
		printf("%s - Wonderful.\n",a);
	else
		printf("%s - Simple.\n",a);
	}
return 0;
}