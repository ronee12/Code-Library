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
int main()
{
	long c,s=1,i=1,n,k,test;
    scanf("%ld",&test);
	for(k=0;k<test;k++)
	{

	int l;
	char st[21];
	scanf("%ld %s",&n,st);
	printf("Case %ld: ",k+1);
	l=strlen(st);
      if(n%l==0)
      {
            long int i,m,k,p,j;
          	map<long ,int > a;
          	  set<int > st;
       set<int >:: iterator it;
          	  a.clear();
          for(i=n;i>=l;i=i-l)
          {
              ////////////
       		m=i;
			for(j=2;j<=(sqrt(i));j++)
			while(m%j==0)
			{
                a[j]++;
                st.insert(j);
				m=m/j;

			}
			    if(m>1){
                a[m]++;
                st.insert(m);
			    }
          }
          int fl=0;
          long long res=1;
            for(it=st.begin();it!=st.end();it++)
                {
                    int mp=*it;
                    res*=(a[mp]+1);
                    if(res>1000000000000000000)
                    {
                        fl=1;
                        break;
                    }
                   // cout<<mp<<" "<<a[mp]<<endl;
                }
                if(fl==1)
                printf("Infinity\n");
                else printf("%lld\n",res);
      }
      else {
            int md=n%l;

            long int i,m,k,p,j;
          	map<long ,int > a;
          	  set<int > st;
       set<int >:: iterator it;
          	  a.clear();
        for(i=n;i>=md;i=i-l)
          {
              ////////////
       		m=i;
			for(j=2;j<=(sqrt(i));j++)
			while(m%j==0)
			{
                a[j]++;
                st.insert(j);
				m=m/j;

			}
			    if(m>1){
                a[m]++;
                st.insert(m);
			    }
          }
          int fl=0;
          long long res=1;
            for(it=st.begin();it!=st.end();it++)
                {
                    int mp=*it;
                    res*=(a[mp]+1);
                    if(res>1000000000000000000)
                    {
                        fl=1;
                        break;
                    }
                }
                if(fl==1)
                printf("Infinity\n");
                else printf("%lld\n",res);\
      }


	}
 return 0;
}
