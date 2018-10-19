#include<stdio.h>
int main()
{
	int x,j,n,m,i,r,s;
	while(scanf("%d%d",&x,&j)!=EOF)
	{
	int c=0,k=0,l=0;
  m=x;
  r=j;
  if(x>j)
  {
	  i=x;
      x=j;
	  j=i;
  }
  while(x<=j)
  {
	  c=1;
	  n=x;
  while(n!=1)
  {
   if(n%2==0)
	   n=n/2;
   else
	   n=3*n+1;
   c=c+1;
  }
  if(l<c)
  {
	  l=c;
	  s=x;
  }
  x=x+1;
  }
  printf("Between %d and %d, %d genarates the longest sequence of %d values.\n",m,r,s,l-1);
	}
	return 0;
}