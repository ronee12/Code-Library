#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	int test,tt;
	scanf("%d",&test);
	for(tt=0;tt<test;tt++)
	{
	int i,j,l,c[100]={0},n,d,y=0,t=0;
		char a[100][100];
	scanf("%d%d%d",&l,&d,&n);
	for(i=0;i<l;i++)
		scanf("%s",a[i]);
	for(j=0;j<l;j++)
		for(i=0;i<d;i++)
			if(isalpha(a[j][i]))
			{
			  c[a[j][i]-65]=c[a[j][i]-65]+1;
			}
			else if(a[j][i]=='.')
				y=y+1;
      for(i=0;i<26;i++)
	  {
	     if(c[i]%n!=0)
			 t=1;
	  }
	  if(y%n!=0)
		  t=1;
	  if(t==1)
		  printf("No\n");
	  else
          printf("Yes\n");
	}

return 0;
}