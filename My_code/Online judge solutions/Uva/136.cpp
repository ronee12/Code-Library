#include<stdio.h>
int main()
{
	 long n=2,c=1,k;
    	while(c!=1500)
		{
		if(n%2==0||n%3==0||n%5==0)
		{
		k=n;
		while(k!=1)
		{
		if(k%2==0)
			k=k/2;
		else if(k%3==0)
			k=k/3;
		else if(k%5==0)
			k=k/5;
		else
			break;
		if(k==1)
			c=c+1;
		}
		}
		n=n+1;
		}
		printf("The 1500'th ugly number is %ld.\n",n-1);
return 0;
}