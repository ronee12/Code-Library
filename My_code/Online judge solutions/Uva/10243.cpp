/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<bits/stdc++.h>
using namespace std;
#define inf           1000000000LL
#define mp            make_pair
#define rep(i,n)      for(int i(0),_n(n);i<_n;++i)
#define ff            first
#define ss            second
#define mem(x,a)      memset(x,a,sizeof(x))
long dp[100005][2],par[100005];
vector<long> v[100005];
long mvc(long i,int guard)
{
    if(v[i].size()==0) return 0;
    long &ret=dp[i][guard];
    if(ret!=-1) return ret;
    long t=0,u;
    rep(j,v[i].size())
    {
        u=v[i][j];
        if(par[i]!=u)
        {
            par[u]=i;
            if(guard==0) t+= mvc(u,1)+1;
            else t+= min(mvc(u,0),mvc(u,1)+1);
        }
    }
    return ret=t;
}


int main()
{
    long n,a,b,m;
    while(cin>>n&&n)
    {


    rep(i,n)
    {
        cin>>m;
        for(int a=1;a<=m;a++){
        cin>>b;
        v[i+1].push_back(b);
      //  v[b].push_back(i+1);
        }
    }
    memset(dp,-1,sizeof(dp));
    if(n==1) cout<<1<<endl;
    else
    cout<<min(mvc(1,0),mvc(1,1)+1)<<endl;
    rep(i,n+1) v[i].clear();

    }
}
