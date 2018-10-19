#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
		int l,i,temp,s[100],b;
	while(scanf("%s%d",a,&b)!=EOF)
	{
		l=strlen(a);
		temp=0;
	for(i=0;i<l;i++)
	{
	temp=temp*10+a[i]-48;
    s[i]=temp/b;
	temp=temp%b;
	}
	printf("divition=");
	for(i=0;i<l;i++)
		if(s[i]>0)
			for(;i<l;i++)
	printf("%d",s[i]);
	printf("\n");
	printf("reminder=");
	printf("%d\n",temp);
	}
return 0;
}