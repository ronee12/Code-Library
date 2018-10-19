#include <stdio.h>
#include <math.h>
#define PI asin(1.0)*2

int main()
{
#ifndef ONLINE_JUDGE
   freopen("in.txt","r",stdin);
#endif

   int nCase;
   double B,H;
   scanf("%d",&nCase);
   while(nCase--)
   {
      scanf("%lf%lf",&B,&H);
      double L = sqrt(H*H+B*B/4);
      double R = B*H/(2*L+B);
      double h = H;
      double r = R;
      while(r >= 0.000001)
      {
         h -= 2*r;
         r = h/H*R;
      }
      printf("%13lf\n",(H-h)*PI);
      if(nCase)
         putchar('\n');
   }

   return 0;
}