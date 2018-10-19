#include<stdio.h>
#include<string.h>
long fact(int n)
{
	long p=1,i;
	for(i=1;i<=n;i++)
		p=p*i;
	return p;
}
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	char a[28];
	scanf("%s",a);
	long i,l,c[28]={0},w;
	l=strlen(a);
	for(i=0;i<l;i++)
		c[a[i]-64]=c[a[i]-64]+1;
	w=1;
     	for(i=0;i<28;i++)
			printf("%d",c[i]);
	/*for(i=1;i<28;i++)
	{
		if(c[i]>1)
			w=w*fact(c[i]);
	}
	printf("Data set %d: %ld\n",j,fact(l)/w);*/
	}
			return 0;
}
