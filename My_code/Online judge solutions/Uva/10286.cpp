#include<stdio.h>
int main()
{
  double n,x=1.0673956827111818692592637626711;
  while(scanf("%lf",&n)!=EOF)
  {
    printf("%.10lf\n",n*x);
  }
return 0;
}