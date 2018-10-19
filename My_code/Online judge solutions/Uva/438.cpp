#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
	double a,x1,x2,x3,A,y1,y2,y3,b,p,q,g,f,c,l,r,ans;
while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
{
	l=(x3-x1)*(x3-x2)+(y3-y1)*(y3-y2);
	r=(x3-x1)*(y1-y2)-(y3-y1)*(x1-x2);
	
	A=l/r;
	a=(y1-y2);
	b=(x1-x2);
	p=(x1+x2);
	q=(y1+y2);
	g=(p+(A*a))/2;
	f=(A*b-q)/2;
	c=(x1*x2)+(y1*y2)+(A*a*x1)-(A*b*y1);
	r=sqrt((g*g)+(f*f)-c);
	ans=2*pi*r;
	printf("%.2lf\n",ans);
}
return 0;
}