#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<ctype.h>
int main()
{
	
	long i,c,l,b[100]={0},j=0,d[100]={0};
	char a[200];
printf("jj");

	
while(gets(a))
	{
		
	    l=strlen(a);
		for(i=0;i<l;i++)
			if(isalpha(a[i]))
			{
				c=0;
		        while(isalpha(a[i])||a[i]=='\'')
				{
					if(a[i]=='\''&&!isalpha(a[i+1]))
						printf("j");
					//	break;
			         c++;
		             i++;
				     if(i==l)
					   break;
				}
					//printf("%d\n",c);
				    d[j++]=c;
					b[c]=b[c]+1;
			}
		
	
	}
	int te,k;
		for(i=0;i<j;i++)
			for(k=0;k<j-1;k++)
				if(d[k]>d[k+1])
				{
				  te=d[k];
				  d[k]=d[k+1];
				  d[k+1]=te;
				}
				for(i=0;i<j;i++)
					if(d[i]>d[i-1])
			printf("%d %d\n",d[i],b[d[i]]);
return 0;
}

