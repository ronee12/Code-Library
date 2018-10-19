#include <stdio.h>
#include <math.h>
int main() 
{
	double n,p;
while(scanf("%lf%lf",&p,&n)!=EOF)
{
//printf("%lf\n",exp(log(8.0)*1/3.0));
printf("%.lf\n",pow(n,1/p));
}
return 0;
}