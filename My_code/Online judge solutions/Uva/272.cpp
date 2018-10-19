#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int l,i,c=0;
    while(gets(a))
	{
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	    if(a[i]=='"'&&c==0)
		{
			printf("``");
			c=1;
		}
		else if(a[i]=='"')
		{
			printf("''");
			c=0;
		}
		else
			printf("%c",a[i]);
	}
	printf("\n");
	}
return 0;
}
