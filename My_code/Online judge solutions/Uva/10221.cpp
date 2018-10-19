#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
	double a,s,r;
	char c[10];
	while(scanf("%lf %lf %s",&s,&a,c)!=EOF)
	{
	  if(c[0]=='m')
		  a=a/60;
	  if(a>180)
		  a=360-a;
	  r=(pi*a)/180;
	  if(a==180)
		  printf("%.6lf %.6lf\n",((s+6440)*r)+1e-9,(2*(s+6440))+1e-9);
	  else
		  printf("%.6lf %.6lf\n",((s+6440)*r)+1e-9,(2*(s+6440)*sin(r/2))+1e-9);
	}
return 0;
}