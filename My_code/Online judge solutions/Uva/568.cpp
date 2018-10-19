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
	long int s[100000]={0};
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
/*	printf("%ld!\n",n);
	for(i=lena-1;i>=0;i--)
	printf("%ld",s[i]);
	printf("\n");*/
	i=0;
	while(s[i]==0)
	{
	  if(s[i]>0)
	    break;
	  i=i+1;
	}
      printf("%5d -> %d\n",n,s[i]);
	}
	return 0;
}