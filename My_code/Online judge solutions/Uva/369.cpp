#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i,cary=0,c,j,lena,m;	
	scanf("%d%d",&n,&m);
		int s[1000]={0};
		s[0]=1;
		lena=1;
	
	for(j=1;j<=n;j++)
	{
		cary=0;c=0;
		for(i=0;i<lena;i++)
		{
			cary=s[i]*j+cary;
			s[i]=cary%10;
			cary=cary/10;
			c=c+1;
		}
		
		while(cary>0)
		{
			s[i]=cary%10;
			cary=cary/10;
			i=i+1;
			c=c+1;
		}
		lena=c;
	}
	for(i=lena-1;i>=0;i--)
		printf("%d",s[i]);
printf("\n");////////////////////
	int s1[1000]={0};
		s1[0]=1;
	int	lena1=1;
	
	for(j=1;j<=m;j++)
	{
		cary=0;c=0;
		for(i=0;i<lena1;i++)
		{
			cary=s1[i]*j+cary;
			s1[i]=cary%10;
			cary=cary/10;
			c=c+1;
		}
		
		while(cary>0)
		{
			s1[i]=cary%10;
			cary=cary/10;
			i=i+1;
			c=c+1;
		}
		lena1=c;
	}

	for(i=lena1-1;i>=0;i--)
		printf("%d",s1[i]);
	printf("\n");///////////////////////

	int s2[1000]={0};
		s2[0]=1;
	int	lena2=1;

	for(j=1;j<=n-m;j++)
	{
		cary=0;c=0;
		for(i=0;i<lena2;i++)
		{
			cary=s2[i]*j+cary;
			s2[i]=cary%10;
			cary=cary/10;
			c=c+1;
		}
		
		while(cary>0)
		{
			s2[i]=cary%10;
			cary=cary/10;
			i=i+1;
			c=c+1;
		}
		lena2=c;
	}

	for(i=lena2-1;i>=0;i--)
		printf("%d",s2[i]);
	printf("\n");
	int temp=0,s3[100]={0},c1[100],d1[100];
	m=0;
	for(i=lena1;i>0;i--)
		c1[lena1-i]=s1[lena1-i];    
	for(i=lena2;i>0;i--)
		d1[lena2-i]=s2[lena2-i];
	for(i=0;i<lena2;i++)
	{
		temp=0;
		for(j=0;j<lena1;j++)
		{
		temp=s3[i+j]+c1[j]*d1[i]+temp;
		s3[i+j]=temp%10;
		m=m+1;
		temp=temp/10;
		}
		if(temp>0)
		{
			s3[i+j]=temp;
			m=m+1;
		}
	}
	for(i=m+1;i>=0;i--)
		if(s3[i]>0)
         for(;i>=0;i--)
           printf("%d",s3[i]);
printf("\n");

	return 0;
}