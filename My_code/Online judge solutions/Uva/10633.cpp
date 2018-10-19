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
int main()
{
	double cc,rs,ss,mm,hh,ans;
	char a[100]={0};
	while(scanf("%s",a)!=EOF)
	{
	  cc=((a[6]-48)*10)+a[7]-48;
	  ss=((a[4]-48)*10)+a[5]-48;
	  mm=((a[2]-48)*10)+a[3]-48;
	  hh=((a[0]-48)*10)+a[1]-48;
	  rs=(((((cc/100)+ss)/60)+mm)/60)+hh;
	
	  ans=(rs*100)/24;
	  if(ans==0)
		  printf("0000000\n");
	  else
      printf("%.lf\n",floor(ans*100000));
	}
 return 0;
}