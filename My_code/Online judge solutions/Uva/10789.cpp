#include<stdio.h>
#include<string.h>
int is_prime(int n)
{
	int ii;
if (n == 1)
 return 0;
else if (n == 2) 
 return 1;
else if (n%2 == 0)
 return 0;
else
{
for (ii=3;ii*ii<=n;ii=ii+2)
     if (n%ii == 0)
           return 0;
}
return 1;
}
int main()
{
	int t,xx=0,l1,ss1[10000],i,ii,temp;
	char ss[10000];
     gets(ss);
	l1=strlen(ss);
	for(i=0;i<l1;i++)
	    ss1[i]=ss[i]-48;
	for(i=0;i<l1;i++)
		xx=xx*10+ss1[i];
	for(t=1;t<xx+1;t++)
	{
	int j,x=0,m,mm[10000],c[10000],l,f;
	char a[10000];
	f=0;
	gets(a);
	l=strlen(a);
for(i=0;i<l-1;i++)
 for(ii=0;ii<l-1;ii++)
    {
	   if(a[ii]>a[ii+1])
	   {
	     temp=a[ii];
		 a[ii]=a[ii+1];
		 a[ii+1]=temp;
	   }
	}
	printf("Case %d: ",t);
	for(i=0;i<l;i=i+x)
	{
		x=0;
	  m=a[i];
	  mm[i]=m;
	  j=i;
	  c[i]=0;
	  while(a[j]==m)
	  {
	    c[i]=c[i]+1;
		x=x+1;
		j=j+1;
	  }
	  if(is_prime(c[i])==1)
	  {
		  printf("%c",mm[i]);
		  f=1;
	  }
	}
	if(f==0)
	  printf("empty");
	printf("\n");
	}
return 0;
}