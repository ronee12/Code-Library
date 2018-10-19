#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define siz 1000000
int main()
{
	char *a,c1[2]={0};
	long int l,i,temp,*s,b,x;
	a=(char*)malloc(siz*sizeof(char));
	s=(long*)malloc(siz*sizeof(long));
	while(scanf("%s %s %ld",a,c1,&b)!=EOF)
	{
		//getchar();
		//scanf("%s %ld",c1,&b);
		l=strlen(a);
		temp=0;
		x=0;
		for(i=0;i<l;i++)
			if(a[i]=='0')
				x++;
			if(x==l)
				printf("0\n");
			else
			{
	for(i=0;i<l;i++)
	{
	temp=temp*10+a[i]-48;
    s[i]=temp/b;
	temp=temp%b;
	}
	if(c1[0]=='/')
	{
	for(i=0;i<l;i++)
		if(s[i]>0)
			for(;i<l;i++)
	printf("%ld",s[i]);
	printf("\n");
	}
	else
	printf("%ld\n",temp);
			}
	}
return 0;
}