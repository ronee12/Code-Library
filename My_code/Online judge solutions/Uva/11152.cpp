#include<stdio.h>
#include<math.h> 
#define pi 2*acos(0.0)
int main()
{
double a,b,c,s,x,l,r;
while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
{
	s=(a+c+b)/2;
 l=sqrt(s*(s-a)*(s-b)*(s-c));
 r=pi*pow(l/s,2);
 x=pi*pow(((a*b*c)/(4*l)),2)+1e-9;
 printf("%.4lf %.4lf %.4lf\n",x-l,l-r,r);
}
return 0;
}