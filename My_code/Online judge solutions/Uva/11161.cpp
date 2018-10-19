#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,y,n,m,s,sm=0;
	int t=1;
	while(scanf("%lf",&m)!=EOF)
	{
		if(m==0)
			break;
		m=m-1;
		sm=0;
	for(n=1;n<=m;n++)
	{
	a = (3+sqrt(5))/(5+sqrt(5));
	 x = (1+ sqrt(5))/2;
	  y = (1- sqrt(5))/2;
		  s= a*pow(x,n) + (1-a)*pow(y,n);
		  sm=sm+s;
	}
	  /*/printf("%.lf\n",sm);*/
	  n=m;
	  	a = (3+sqrt(5))/(5+sqrt(5));
	 x = (1+ sqrt(5))/2;
	  y = (1- sqrt(5))/2;
		  s= a*pow(x,n) + (1-a)*pow(y,n);
		 /*/ printf("%lf\n",s);*/
		  long s1;
		  s1=s;
		  printf("Set %d:\n",t);
		  t++;
		  if(s1%2==0)
			  printf("%.lf\n",sm-(s1/2));
		  else
			  printf("%.lf\n",sm-(s1+1)/2+1);
		  
	}
return 0;
}