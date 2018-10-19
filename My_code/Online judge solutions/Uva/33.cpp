#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
/*	long c[10000]={0},temp,i,l,t,j;
	char a[10000],temp1[2]={0},l1[]={" ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	scanf("%ld",&t);
	for(j=1;j<=t+1;j++)
	{
	gets(a);
	l=strlen(a);
for(i=0;i<l;i++)
 a[i]=toupper(a[i]);
	for(i=0;i<l;i++)
		c[a[i]-64]=c[a[i]-64]+1;
	}
		//for(i=1;i<27;i++)
			//l1[i]=64+i;
		for(i=1;i<26;i++)
			for(j=1;j<26;j++)
			   if(c[j]<c[j+1])
			   {
			     temp=c[j];
				 c[j]=c[j+1];
				 c[j+1]=temp;
				 temp1[0]=l1[j];
				 l1[j]=l1[j+1];
				 l1[j+1]=temp1[0];
			   }
		for(i=1;i<27;i++)
		{
			if(c[i]>0)
			printf("%c %ld\n",l1[i],c[i]);
		}*/
	int y;
	scanf("%d",&y);
	if((y%100 && y%4==0)||y%400==0)
		printf("kkkkkkkkkk");
return 0;
}
