#include<stdio.h>
#include<string.h>
int main()
{
	char a[101]="",b[101]="";
		int l1,l2,i,x;
	while(gets(a))
	{
	     gets(b);
   l1=strlen(a);
   l2=strlen(b);
   if(l1>l2)
	   x=l1;
   else
	   x=l2;
   for(i=0;i<x;i++)
	   printf("%c%c\n",b[i],a[i]);
   for(i=0;i<101;i++)
	   a[i]=' ';
   for(i=0;i<101;i++)
	   b[i]=' ';
	}
return 0;
}