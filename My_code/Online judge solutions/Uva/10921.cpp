#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,l=5;
	char a[100];
while(scanf("%s",a)!=EOF)
{
	l=strlen(a);
    for(i=0;i<l;i++)
	{
	if(a[i]>='A' && 'C'>=a[i])
		a[i]='2';
	else if(a[i]>='D' && a[i]<='F')
			a[i]='3';
	else if(a[i]>='G' && a[i]<='I')
		a[i]='4';
	else if(a[i]>='J' && a[i]<='L')
			a[i]='5';
	else if(a[i]>='M' && a[i]<='O')
			a[i]='6';
	else if(a[i]>='P' && a[i]<='S')
			a[i]='7';
	else if(a[i]>='T' && a[i]<='V')
			a[i]='8';
	else if(a[i]>='W' && a[i]<='Z')
		a[i]='9';
	}
printf("%s\n",a);
}
return 0;
}