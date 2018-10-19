#include<stdio.h>
#include<math.h>
int main()
{

	long i,k,n;
	while(scanf("%ld",&n)!=EOF)
	{
			double a=0,b=0,x,y,x1,x2,y1,y2,dd,gd;
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	scanf("%lf",&x2);
	scanf("%lf",&y2);
/*	if(x1>x2)
		xm=x1;
	else
		xm=x2;
	if(y1>y2)
		ym=y1;
	else
		ym=y2;*/
	k=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x,&y);
		gd=4*(pow(x-x1,2)+pow(y-y1,2));
		dd=(pow(x-x2,2)+pow(y-y2,2));
		if(k==0)
             if(gd<=dd)
			 {
				 a=x;
			 b=y;
			 k=1;
			 }
	}
	if(k==1)
	printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",a,b);
	else
		printf("The gopher cannot escape.\n");
	}

return 0;
}