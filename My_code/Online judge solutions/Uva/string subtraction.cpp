#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include <iostream>
int main()
{
	
	int q,tt1;
	scanf("%d",&tt1);
	for(q=0;q<tt1;q++)
	{
		char b[20000]={0},c[20000]={0};
 int a[20000]={0},d[20000]={0},x[20000]={0},n1,n2,i,temp,t,w=0;
		scanf("%s%s",b,c);
	n1=strlen(b);
	n2=strlen(c);
	 temp=strcmp(b,c);
	 if(temp==0 && n1==n2)
		 printf("0\n");
	 else
	 {
	if(n1>n2)
	{
	for(i=n1;i>0;i--)
		a[n1-i]=b[i-1]-48;
	for(i=n2;i>0;i--)
		d[n2-i]=c[i-1]-48;
	}
	else if(n1<n2)
	{
		w=1;
	for(i=n2;i>0;i--)
		a[n2-i]=c[i-1]-48;
	for(i=n1;i>0;i--)
		d[n1-i]=b[i-1]-48;
	}
	else if(n1==n2)
	{
	   if(temp>0)
	  {
	  	for(i=n1;i>0;i--)
		a[n1-i]=b[i-1]-48;
	for(i=n2;i>0;i--)
		d[n2-i]=c[i-1]-48;
	  }
	  else
	  {
		  w=1;
	  	for(i=n2;i>0;i--)
		a[n2-i]=c[i-1]-48;
	for(i=n1;i>0;i--)
		d[n1-i]=b[i-1]-48;
	  }

	}
	if(n1>n2)
		t=n1;
	else
		t=n2;
	i=0;
	do
	{
     if(a[i]<d[i])
	 {
	 a[i]=a[i]+10;
	 d[i+1]=d[i+1]+1;
	 }
	 x[i]=a[i]-d[i];
		 i=i+1;
	}
	while(i!=t);
	if(w==1)
		printf("-");
	for(i=t;i>=0;i--)
		if(x[i]>0)
			for(;i>=0;i--)
				printf("%d",x[i]);
			printf("\n");
	 }
	}
	return 0;
}