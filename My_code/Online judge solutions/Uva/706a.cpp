#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,m,s=1;
	char a[100][100]={""};
	for(i=0;i<1;i++)
	{
		m=0;
	  for(j=0;j<s+2;j++)
	  {
	  a[m][i]=' ';
	  m=m+1;
	  }
	  for(j=0;j<s;j++)
	  {
	    a[m][i]='|';
		m=m+1;
	  }
	}
	for(i=0;i<m;i++)
	printf("%c\n",a[i][0]);
	return 0;
}