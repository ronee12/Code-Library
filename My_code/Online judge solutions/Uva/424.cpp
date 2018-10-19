#include<stdio.h>
#include<string.h>
int main()
{
	char b[200]={0},c[200]={0};
	int a[200]={0},d[200]={0},x[200]={0},n1,n2=0,i,temp,j,t=0,k;
		while(scanf("%s",b)!=EOF)
		{
		for(k=t;k>0;k--)
			c[t-k]=x[k-1]+48;
	n1=strlen(b);
	if(n1==1 && b[0]-48==0)
		break;
	n2=strlen(c);
	for(i=n1;i>0;i--)
		a[n1-i]=b[i-1]-48;
	for(i=n2;i>0;i--)
		d[n2-i]=c[i-1]-48;
	if(n1>n2)
		t=n1;
	else
		t=n2;
	i=0;
	temp=0;
	do
	{
	temp=a[i]+d[i]+temp;
    x[i]=temp%10;
    temp=temp/10;
	i=i+1;
	}
	while(i!=t);
	if(temp!=0)
	{
		x[i]=temp;
		t=t+1;
	}
/*	for(j=t-1;j>=0;j--)
	printf("%d",x[j]);
	printf("\n");*/
		}
		for(j=t-1;j>=0;j--)
	printf("%d",x[j]);
	printf("\n");
return 0;
}