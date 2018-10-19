#include<stdio.h>
#include<math.h>
int main()
{
	double n,a;
	while(scanf("%lf",&n)!=EOF)
	{
		if(n==0)
			break;
	  if(n==1||n==2||n==3||n==5||n==7||n==13||n==17||n==19)
	  {
		  a=pow(2,n-1)*(pow(2,n)-1);
	         printf("Perfect: %.lf!\n",a);
	  }
	  else if(n==31)
		  printf("Perfect: 2305843008139952128!\n");
	  else if(n==11||n==23||n==29)
		  printf("Given number is prime. But, NO perfect number is available.\n");
	  else
		  printf("Given number is NOT prime! NO perfect number is available.\n");
	}
return 0;
}
