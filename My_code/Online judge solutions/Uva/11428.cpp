#include<stdio.h>
#include<math.h>
int main()
{
	long i,n[10010][5]={0},j,a,x;
	for(i=1;i<=100;i++)
	{
	  for(j=1;j<i;j++)
	  {
		  a=i*i*i-j*j*j;
	  if(a<=10000&&n[a][0]==0)
	  {
	     n[a][0]=i;
		 n[a][1]=j;
	  }
	}
	}
	while(scanf("%ld",&x)!=EOF)
	{
	  if(x==0)
		  break;
	  if(n[x][0]>0)
	  printf("%ld %ld\n",n[x][0],n[x][1]);
	  else 
		  printf("No solution\n");
	}

return 0;
}