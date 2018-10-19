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
#define MAXINT ((1<<31) - 1)
////////#define MAXP 1000//
long MAXP=100000;

vector<long > primes;
int nprimes = 0;

int main()
{
    scanf("%ld %ld",&low,&up);
        //bool comp[MAXP] = {0};
        vector<bool > comp;
        comp.clear();
        for (long i = 3; i < up; ++i)
                if (comp[i]!=true)
                {
                       primes.push_back(i);
                       // primes[nprimes++] = i;
					//	printf("%d ",i);
                      /*  for (int j = i; j < MAXP; j += i)
                                comp[j] = true;*/
					long 	j=i;
			while((j+i)<MAXP)
			{
				j=j+i;
				comp[j]=true;
			}
                }
                cout<<primes.SZ<<" ";

	return 0;
}
