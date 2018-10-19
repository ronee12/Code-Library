#include<stdio.h>
#include<string.h>
#include<iostream.h>
int main()
{
	 int i,l,c,j,x;
	 char a[301][301]={0};
c=0;
i=0;
    	while(gets(a[i]))
            {
			getchar();
	
				l=strlen(a[i]);
				if(l>c)
					c=l;
				i=i+1;
			}
		for(j=0;j<c;j++)
		{
			for(x=i-1;x>=0;x--)
			{
				 if(a[x][j]!='\t')
				printf("%c",a[x][j]);
			}
				printf("\n");
		}
return 0;
}