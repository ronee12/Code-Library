#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,x;
	long long a;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
	if(m==0&&n==0)
		break;
		a=pow(m,n);
        x=a%10;
		printf("%d\n",x);
	}
return 0;
}