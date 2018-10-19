#include<stdio.h>
#include<math.h>
int main()
{
	long int a,m;
	double n;
		while(scanf("%ld",&a)!=EOF)
		{
			if(a==0)
				break;
		 m=(sqrt(a));
		 n=(sqrt(a));
		 if(m==n)
			 printf("yes\n");
		 else
			 printf("no\n");
		}
return 0;
}