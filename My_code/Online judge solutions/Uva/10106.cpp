#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
		char a[10000],b[10000];
while(scanf("%s%s",a,b)!=EOF)
{
	long int l1,l2,i,j,temp=0,s[100000]={0},m=0,c[10000],d[10000];
    l1=strlen(a);
	l2=strlen(b);
	for(i=l1;i>0;i--)
		c[l1-i]=a[i-1]-48;
	for(i=l2;i>0;i--)
		d[l2-i]=b[i-1]-48;
	for(i=0;i<l2;i++)
	{
		temp=0;
		for(j=0;j<l1;j++)
		{
		temp=s[i+j]+c[j]*d[i]+temp;
		s[i+j]=temp%10;
		m=m+1;
		temp=temp/10;
		}
		if(temp>0)
		{
			s[i+j]=temp;
			m=m+1;
		}
	}
	int cc=0;
	for(i=0;i<m;i++)
	{
	   if(s[i]!=0)
		   cc=1;
	}
	if(cc==1)
	{
	for(i=m+1;i>=0;i--)
		if(s[i]>0)
        for(i=i;i>=0;i--)
         printf("%ld",s[i]);
	}
	else
		printf("0");
printf("\n");
}
return 0;
}