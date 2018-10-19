#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
	int t,i;
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++)
	{
		char a[20]={0};
		int l,c[3]={0},j=0,x,p;
	  gets(a);
	  l=strlen(a);
	  for(p=0;p<l;p++)
	  {
		  x=0;
	    while(isdigit(a[p]))
		{
		  x=x*10+a[p]-48;
		  p++;
		  if(p==l)
			  break;
		}
		c[j]=x;
		j++;
	  }
	 if(j==1)
		 printf("%.4lf\n",(pi*x*x)/8);
	 else
		 printf("%.4lf\n",2*pi*c[0]*c[1]);
	}

	return 0;
}