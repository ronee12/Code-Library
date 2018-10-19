#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main()
{
long int n,i,cary=0,c,j,lena;	
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
		break;
	long int s[10000]={0};
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
long n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
	for(i=lena-1;i>=0;i--)
	{
		if(s[i]==0)
			n0=n0+1;
	    else if(s[i]==1)
			n1=n1+1;
	    else if(s[i]==2)
			n2=n2+1;
		else if(s[i]==3)
			n3=n3+1;
		else if(s[i]==4)
			n4=n4+1;
		else if(s[i]==5)
			n5=n5+1;
		else if(s[i]==6)
			n6=n6+1;
		else if(s[i]==7)
			n7=n7+1;
	    else if(s[i]==8)
			n8=n8+1;
		else if(s[i]==9)
			n9=n9+1;
	}
	printf("%ld! --\n",n);
	printf("(0)    %ld    (1)    %ld    (2)    %ld    (3)    %ld    (4)    %ld\n",n0,n1,n2,n3,n4);
	printf("(5)    %ld    (6)    %ld    (7)    %ld    (8)    %ld    (9)    %ld\n",n5,n6,n7,n8,n9);
	}
	return 0;
}