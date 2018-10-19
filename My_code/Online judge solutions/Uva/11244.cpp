#include<stdio.h>
int main()
{
	int i,m,n,j,c;
	while(scanf("%d%d",&m,&n))
	{
		if(m==0 && n==0)
			break;
	c=0;
		char a[102][102]={0};
	for(i=0;i<m;i++)
			scanf("%s",&a[i]);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='*')
			   if('*'!=a[i-1][j-1]&& '*'!=a[i-1][j] && '*'!=a[i-1][j+1]&& '*'!=a[i][j-1]&& '*'!=a[i][j+1]&& '*'!=a[i+1][j-1]&& '*'!=a[i+1][j]&& '*'!=a[i+1][j+1])
			     c=c+1;
			}
			printf("%d\n",c);
	}
return 0;
}