#include<stdio.h>
#include<math.h>
int main()
{
  long a[1000][10000],i,j,p=1,x=1,n;
  for(i=0;i<1000;i++,p=p+2)
	  for(j=0;j<p;j++)
	  {
		  a[i][j]=x;
		  x=x+2;
	  }
  while(scanf("%ld",&n)!=EOF)
  printf("%ld\n",a[n/2][n-3]+a[n/2][n-2]+a[n/2][n-1]);
return 0;
}