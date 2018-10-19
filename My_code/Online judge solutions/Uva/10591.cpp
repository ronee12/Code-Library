#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include <iostream>
int main()
{
	long test,j;
	scanf("%ld",&test);
	for(j=1;j<=test;j++)
	{
  long int a,n,t,r,c=0,p=1,x[10000],i;
  scanf("%ld",&n);
    a=n;
	x[0]=a;
  while(n!=1)
  {
	
	  t=0;
    while(n>9)
	{
	  r=n%10;
	  n=n/10;
	  t=t+r*r;
	}
	n=n*n+t;
	x[p]=n;
	for(i=0;i<p;i++)
		if(n==x[i])
		{
		  c=1;
		  break;
		}
		p=p+1;
    if(n==a)
	{
	  c=1;
	  break;
	}
	if(c==1)
		break;
  }
  if(c==0)
	  printf("Case #%ld: %ld is a Happy number.\n",j,a);
  else
	  printf("Case #%ld: %ld is an Unhappy number.\n",j,a);
	}
return 0;
}