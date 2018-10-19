#include<stdio.h>
int main()
{
	long int x,j,n,m,i,r,s;
	while(scanf("%ld%ld",&x,&j)!=EOF)
	{
		if(x<=0 || j<=0)
			break;
    long int c=0,l=0;
  m=x;
  r=j;
  if(x>j)
  {
	  i=x;
      x=j;
	  j=i;
	  m=x;
	  r=j;
  }
  while(x<=j)
  {
	  c=1;
	  n=x;
  do
  {
   if(n%2==0)
	   n=n/2;
   else
	   n=3*n+1;
   c=c+1;
  }
  while(n!=1);
  if(l<c)
  {
	  l=c;
	  s=x;
  }
  x=x+1;
  }
  printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",m,r,s,l-1);
	}
	return 0;
}