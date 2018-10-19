#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include <iostream>
int main()
{
	char a[10001]={0},b[10001]={0};
   long int i,j,l,k,p,count,t,tt;
   scanf("%ld",&tt);
   getchar();
   for(t=1;t<=tt;t++)
   {
	   gets(a);
    l=strlen(a);
	if(l==4)
	  if(a[0]=='D' &&a[1]=='O'&&a[2]=='N'&&a[3]=='E')
		  break;
	j=0;
	for(i=0;i<l;i++)
	{
	  if(isalpha(a[i]))
	  {
			  b[j]=a[i];
			  j=j+1;
	  }
	}
	count=j;
	k=0;
	if(j%2==0)
	{
		p=j/2-1;
		for(i=0;i<=p;i++)
		{
			if(b[i]!=b[j-1])
               k=1;
			j=j-1;
		}
	}
	else
	{
		p=j/2;
		for(i=0;i<p;i++)
		{
			if(b[i]!=b[j-1])
				k=1;
			j=j-1;
		}
	}
	printf("Case #%ld:\n",t);
	long ch;
	float ch1;
	ch1=sqrt(count);
	ch=sqrt(count);
    if(k==0 && ch==ch1)
		printf("%ld\n",(int)sqrt(count));
	else
		printf("No magic :(\n");
   }
return 0;
}
