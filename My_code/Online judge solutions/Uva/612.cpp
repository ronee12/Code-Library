#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int tt,t;
	scanf("%d",&tt);
	for(t=0;t<tt;t++)
	{
	int i,j,temp,l,x[200]={0},c,k,temp1,temp3,m;
    char a[101][101],b[101][101];
	scanf("%d%d",&l,&c);
	for(i=0;i<c;i++)
	       scanf("%s",a[i]);

	for(i=0;i<c;i++)
		for(j=0;j<l;j++)
			b[i][j]=a[i][j];

	for(k=0;k<c;k++)
	{
		x[k]=0;
	for(i=0;i<l-1;i++)
		for(j=0;j<l-1;j++)
			if(b[k][j]>b[k][j+1])
			{
			  temp=b[k][j];
			  b[k][j]=b[k][j+1];
			  b[k][j+1]=temp;
			  x[k]=x[k]+1;
			}

			printf("%d ",x[k]);
	}


	for(i=0;i<k-1;i++)
		for(j=0;j<k-1;j++)
			if(x[j]>x[j+1])
			{
				temp1=x[j];
			   x[j]=x[j+1];
			   x[j+1]=temp1;
			   for(m=0;m<l;m++)
			   {
			     temp3=a[j][m];
				 a[j][m]=a[j+1][m];
				 a[j+1][m]=temp3;
			   }
			}
			if(t>0)
			printf("\n");

			for(i=0;i<k;i++)
			  printf("%s\n",a[i]);
	}
return 0;
}
