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
int euclidd,euclidx,euclidy;
void extendedeuclid(int a,int b)
{
	if(b==0)
	{
		euclidd=a;
		euclidx=1;
		euclidy=0;
		return ;
	}
	extendedeuclid(b,a%b);
	int d1,x1,y1;
	d1=euclidd;
	x1=euclidx;
	y1=euclidy;
	euclidx=y1;
	euclidy=x1-((a/b)*y1);
}
main()
{
	int a,b;
	while(cin>>a>>b!=0)
	{
		extendedeuclid(a,b);
		cout<<euclidx<<' '<<euclidy<<' '<<euclidd<<endl;
	}
	return 0;
}

