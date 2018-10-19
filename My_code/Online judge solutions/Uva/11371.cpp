#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char a[2000],b[100],c[2000]={0};
   int aa[100],i,j,temp,l;
	   scanf("%s",a);
	   l=strlen(a);
     for(i=0;i<l;i++)
	   b[i]=a[i];

	for(i=0;i<l-1;i++)
		for(j=0;j<l-1;j++)
		{
			if(a[j]>a[j+1])
			{
			  temp=a[j]-48;
			  a[j]=a[j+1];
			  a[j+1]=temp+48;
			}
		}
		for(i=0;i<l;i++)
		printf("%c",a[i]);
	printf("\n");

		for(i=0;i<l-1;i++)
		for(j=0;j<l-1;j++)
		{
			if(b[j]<b[j+1])
			{
			  temp=b[j]-48;
			  b[j]=b[j+1];
			  b[j+1]=temp+48;
			}
		}
		for(i=0;i<l;i++)
		printf("%c",b[i]);
	printf("\n");
 for(i=0;i<l;i++)
	   c[i]=a[i];
printf("%s",c);
return 0;
}
