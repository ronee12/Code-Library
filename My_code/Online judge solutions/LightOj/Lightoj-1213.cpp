
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;
llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}
int main(int argc, char *argv[])
{

   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       llint n,k,M,sum=0;
       scanf("%lld%lld%lld",&n,&k,&M);
       for(int j=1;j<=n;j++)
       {
           int a;
           scanf("%d",&a);
           sum+=a;
       }
       llint b=((sum%M)*(k%M)*bigMod(n,k-1,M))%M;
       printf("Case %d: %lld\n",i,b);
   }
   return 0;
}

