#include<stdio.h>
int main()
{
	int i,j,n,a[10][10];
	int x[16]={1,0,1,0,0,0,0,1,1,1,1}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		scanf("%2d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	   if(a[i][j]!=x[y])
	   {
          c=c+1;
		  m=i;
		  n=j;
	   }
	   y=y+1;
	}
	}
return 0;
}