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

using namespace std;
char a,b[50005][209]={0};
int cmp_string(const void* _a,const void* _b)
{

    char* a= (char*)_a;
    char* b= (char*)_b;
    return strcmp(a,b);

}
int main()
{
   int i,f=0,m;
     m=0;
	 while(1)
     {
 if((a=getchar())==EOF)
            break;
         if(isalpha(a))
          {
			 if(isupper(a))
				 a=a+32;
          b[f][m]=a;
          m++;
          }
          else
          {
            f++;
            m=0;
          }
     }
	 qsort(b,f,sizeof(b[0]),cmp_string);
    for(i=1;i<f;i++)
    if(strcmp(b[i],b[i-1])!=0)
  printf("%s\n",b[i]);

    return 0;
}

