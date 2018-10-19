#include<stdio.h>
int main()
{
	long int x,m;
       while(scanf("%ld%ld",&x,&m)!=EOF)
	   {
		   if(x==-1 && m==-1)
			   break;
		    long int c=0,r,n;
		while(x<=m)
		{
		n=x;
		do
		{
		r=n%10;
		n=n/10;
		if(r==0)
			c=c+1;
		}
		while(n!=0);
		x=x+1;
		}
		printf("%ld\n",c);
	   }
return (0);
}