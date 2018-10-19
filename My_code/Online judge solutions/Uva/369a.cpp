#include<stdio.h>
#include<string.h>
double gcd(long a,long b)
{
if(a%b==0)
return b;
else
return gcd(b,a%b);
}

int main()
{
long m,n;
	while(scanf("%ld%ld",&n,&m)!=EOF)
	{
		long dv,i,x[10000],y[10000],j,r;
		if(n==0 || m==0)
			break;
		i=0;
		j=0;
		r=0;
	dv=n-m;
if(dv>m)
{ do
  {
    x[i]=dv+1;
	dv=dv+1;
	i=i+1;
  }
  while(dv!=n);
  do
  {
	  r=r+1;
   y[j]=r;
	j=j+1;
  }
  while(r!=m);

}
else
{
   do
   {
     x[i]=m+1;
	 m=m+1;
	 i=i+1;
   }
   while(m!=n);
   do
   {
     r=r+1;
	 y[j]=r;
	 j=j+1;
   }
   while(r!=dv);
}
double mm[1000],an[10000],xx=1,an1[10000],xx1=1;
for(i=0;i<r;i++)
{
mm[i]=gcd(x[i],y[i]);
an[i]=(x[i]/mm[i]);
an1[i]=(y[i]/mm[i]);
xx=(xx*an[i]);
xx1=(xx1*an1[i]);
}
printf("%ld things taken %ld at a time is %.0lf exactly.\n",n,m,(xx/xx1));
	}
return 0;
}
