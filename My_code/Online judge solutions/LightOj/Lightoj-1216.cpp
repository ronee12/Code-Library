
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
          double r1,r2,p,h;
          cin>>r1>>r2>>h>>p;
          double a=(r1-r2)/h;
          double R=r1-(h-p)*a;
          double ans=((R*R+r2*R+r2*r2)*p*PI)/3.;
          printf("Case %d: %.10lf\n", i,ans);
    }
    return 0;
}
