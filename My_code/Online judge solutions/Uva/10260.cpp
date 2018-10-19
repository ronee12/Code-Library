#include<stdio.h>
#include<string.h>
int main()
{
	int c,i,l,j,t;
	char a[100];
		while(gets(a))
		{
			int b[100]={0};
			j=0;
		  l=strlen(a);
		  for(i=0;i<l;i++)
		  {
			  c=0;
		  if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')
                c=1;
		  else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
			  c=2;
		  else if(a[i]=='D'||a[i]=='T')
			  c=3;
		  else if(a[i]=='L')
			  c=4;
		  else if(a[i]=='M'||a[i]=='N')
			  c=5;
		  else if(a[i]=='R')
			  c=6;
		  if(a[i]!=a[i+1])
		  {
			  b[j]=c;
			  j=j+1;
		  }
		  }
		  for(i=0;i<j;i++)
		  {
			  if(b[i]!=0&&b[i]!=b[i+1])
		        printf("%d",b[i]);
		  }
		  printf("\n");
		  for(t=0;t<50;t++)
				a[t]=' ';
		}
return 0;
}