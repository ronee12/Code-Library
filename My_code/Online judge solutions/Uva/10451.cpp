#include<stdio.h>
#include<math.h>
int main()
{
	long int i=1,n;
	double a,o,s,area_R,area_r;
	while(scanf("%ld %lf",&n,&a)!=EOF)
	{
		if(n<3)
			break;
	   area_r = (2 * acos(0)) * (a/(n*tan((2 * acos(0))/n)));
       area_R = (2 * acos(0)) * 2*a/(n*sin(2*(2 * acos(0))/n));
	   s=area_R-a;
	   o=a-area_r;
	   printf("Case %ld: %.5lf %.5lf\n",i++,s,o);
	}
	return 0;
}