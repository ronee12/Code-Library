#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define REP(i,n) for(__typeof(n) i=0; i<(n); i++)
#define REP2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define INF (1<<30)
#define PI 3.14159265358979323846264338327950
#define PB(x) push_back(x)
#define ALL(x) x.begin(),x.end()
#define SZ size()
#define eps 1e-9
#define VI vector<int>
#define VS vector<string>
#define LL long long
#define MII map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define CLEAR(x) memset(x,0,sizeof(x));
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define MAX 1000001
using namespace std;
long a[MAX],b[MAX];
long long res;
void merge(long l,long u,long mid){
long k,h,j,i;
k=mid+1;
h=l;
j=0;
while(1)
{
    if(h>mid||k>u)
    break;
  if(a[h]>a[k])
  {
    b[j]=a[k];
    res+=mid-h+1;
    k++;
  }
  else
  {
      b[j]=a[h];
      h++;
  }
  j++;
}
if(k>u)
{
    for(i=h;i<=mid;i++)
    b[j++]=a[i];
}
else{
    for(i=k;i<=u;i++)
    b[j++]=a[i];
}
for(i=0;i<j;i++)
      a[l+i]=b[i];
}
void mergesort(long l,long u){
if(l<u){
long mid=(l+u)/2;
mergesort(l,mid);
mergesort(mid+1,u);
merge(l,u,mid);
}
}
int main()
{
long n,i;
while(scanf("%ld",&n)==1){
res=0;
for(i=1;i<=n;i++)
    scanf("%ld",&a[i]);
mergesort(1,n);
printf("num of swap %lld\n",res);
for(i=1;i<=n;i++)
printf("%ld ",a[i]);
printf("\n");
}
return 0;
}
