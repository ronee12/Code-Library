#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100]={0-48};
	int i,l;
		gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
		b[i]=a[l-(i+1)];
	printf("%s",b);
return 0;
}