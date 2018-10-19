#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
		int l,i,temp,s[10000],b;
	while(scanf("%s",a)!=EOF)
	{

		int c=0;
		b=11;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
		 if(a[i]=='0')
			 c=c+1;
		}
		temp=0;
		if(c==l)
			break;
	for(i=0;i<l;i++)
	{
	temp=temp*10+a[i]-48;
    s[i]=temp/b;
	temp=temp%b;
	}
	if(temp==0)
		printf("%s is a multiple of 11.\n",a);
	else
		printf("%s is not a multiple of 11.\n",a);
	}
return 0;
}