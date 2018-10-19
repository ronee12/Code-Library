#include<stdio.h>
#include<math.h>
int main()
{
	int t=0;
	double ans,n;
		while(scanf("%lf",&n)!=EOF)
		{
			if(n==0)
				break;
			t=t+1;
		  ans=ceil(3+sqrt(9+(8*n)))/2;
		  printf("Case %d: %.lf\n",t,ans);
		}
return 0;
}