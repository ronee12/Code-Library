#include<stdio.h>
#include<string.h>
int main()
{
	int q,test;
		scanf("%d",&test);
	for(q=1;q<test+2;q++)
	{
	int i,l,j,temp,c[100]={0},k=0;
	char a[100]={0},b[100];
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
	for(j=0;j<l-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j+1]-48;
		a[j+1]=a[j];
		a[j]=temp+48;
		}
	}
	}
	b[0]=a[0];
	for(i=0;i<l+1;i++)
		if(b[0]==a[i])
			c[k]=c[k]+1;
		else
		{
			b[0]=a[i];
		    k=k+1;
			i=i-1;
		}
 long int tot=1,x[100],fm;
    for(i=1;i<l+1;i++)
		tot=tot*i;
for(j=0;j<k;j++)
{
	x[j]=1;
    for(i=1;i<(c[j]+1);i++)
       x[j]=x[j]*i;
}
fm=1;
for(j=0;j<k;j++)
    fm=fm*x[j];
if(q>1)
   printf("Data set %d: %lld\n",q-1,tot/fm);
	}
return 0;
}