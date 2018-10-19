#include<stdio.h>
#include<string.h>
int main()
{
	int n;
		char a[200],b[200];
	while(scanf("%d",&n)!=EOF)
	{
			int m=0,k=0,i,j,l,l1;
		if(n==0)
			break;
	scanf("%s",a);
	l=strlen(a);
	l1=l/n;
	for(i=0;i<n;i++)
	{
		k=k+l1;
		for(j=k-1;j>=k-l1;j--)
		{
			b[m]=a[j];
			m=m+1;
		}
	}
	for(i=0;i<l;i++)
	printf("%c",b[i]);
	printf("\n");
	}
return 0;
}