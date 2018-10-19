#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,temp,l,x=0;
    char a[100];
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
		for(j=0;j<l-1;j++)
			if(a[j]>a[j+1])
			{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
			  x=x+1;
			}
	printf("%s",a);
	printf("%d",x);
return 0;
}