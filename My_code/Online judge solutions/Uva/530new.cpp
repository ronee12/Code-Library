#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
long gcd(long a,long b)
{
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
void divbygcd(long &a,long &b)
{
	long g=gcd(a,b);
	a=a/g;
	b=b/g;
}
double ct(int n,int m)
{
	long nu=1,de=1,tomul,todiv,i;
	if(m>n/2)
		m=n-m;
	for(i=1;i<=m;i++)
	{
		tomul=n-m+i;
		todiv=i;
		divbygcd(tomul,todiv);
		divbygcd(nu,todiv);
		divbygcd(tomul,de);
		nu=nu*tomul;
		de=de*todiv;
		
	}
	double d=(double)nu/de;
	
	return d;
}
int main()
{
	long n,m;
	double k;
	while(scanf("%ld%ld",&n,&m))
	{
		if(n==0&&m==0)
			break;
		k=ct(n,m);
		printf("%.0lf\n",k);
	}
	return 0;
}