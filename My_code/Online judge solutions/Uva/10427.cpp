#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define siz 100000000
int main()
{
	char *a;
	a=(char*)malloc(siz*sizeof(char));
	int i,n,m,x=1,k,j,b[100];
	for(i=0;i<100000000;i++)
	{
		j=0;
		m=x;
		while(m!=0)
		{
			b[j]=m%10;
			m=m/10;
			j++;
		}

		for(k=j-1;k>=0;k--,i++)
		{
		a[i]=b[k]+48;
		}
		x++;
		i--;
	}
	while(scanf("%d",&n)!=EOF)
	printf("%c\n",a[n-1]);
	return 0;
}