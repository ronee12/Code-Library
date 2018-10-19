#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
     int b[1000],i,l,x,nine,r,n,c;
	while(scanf("%s",a)!=EOF)
	{
		c=0;
		x=0;
		if(a[0]=='0')
			break;
	 l=strlen(a);
	 for(i=0;i<l;i++)
		 b[i]=a[i]-48;
      for(i=0;i<l;i++)
		  x=x+b[i];
	  while(x>=10)
	  {
		  n=x;
		  nine=0;
	  while(n!=0)
	  {
	    r=n%10;
		n=n/10;
		nine=nine+r;
	  }
	  x=nine;
	  c=c+1;
	  }
	  if(x==9)
		  printf("%s is a multiple of 9 and has 9-degree %d.\n",a,c+1);
	  else
		  printf("%s is not a multiple of 9.\n",a);
	}
return 0;
}