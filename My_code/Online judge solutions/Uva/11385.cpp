#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int bs( long int a[],long int n,long int l,long int u)
{
	long int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  bs(a,n,l,mid-1);
	  else
	  bs(a,n,mid+1,u);
}
int main()
{
 long int j,g,l,a[1000],m,i,b[1000],c[1000];

	for(g=1;g<=50;g++)
	{

 long int n=0,m=1,x=0,i=0;
	  for(i=0;i<g;i++)
		{
		x=n+m;
		n=m;
		m=x;
		}
	  a[g-1]=x;
	}
	long t,tt;
	scanf("%ld",&t);
	for(tt=0;tt<t;tt++)
	{
			char d[1002]={0},line[1002]={0};
	scanf("%ld",&m);
 long max=0;
	for(i=0;i<m;i++)
	{
		scanf("%ld",&b[i]);
		j=b[i];
		
	  c[i]=bs(a,j,0,50);
	  if(c[i]>max)
		  max=c[i];
	}
		getchar();
	gets(line);
	l=strlen(line);
	long int f=0;
      for(i=0;i<l;i++)
	  {
	    if(isupper(line[i]))
		{
		  d[c[f]]=line[i];
		  f=f+1;
           if(f==m)
			   break;
		}
	  }
     for(i=0;i<=max;i++)
	 {
		 if(!isalpha(d[i]))
			 d[i]=' ';
	 }
	  printf("%s\n",d);
	}
return 0;
}