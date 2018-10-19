#include <bits/stdc++.h>
using namespace std;
int Set(int N,int pos) {return N |= (1LL<<pos);}
int Reset(int N,int pos) {return N&= ~(1LL<<pos);}
bool Check(int N,int pos) {return N&(1LL<<pos);}
long dp[1LL<<13];
int nom(long n)
{
    int c=0;
    for(int i=0;i<12;i++)
    {
        if(Check(n,i)) c++;
     //   cout<<check(n,i);
    }

   // cout<<endl;
    return c;
}
long bitmask(long mask)
{
   // if(mask==0) return 0;
   if(dp[mask]!=-1) return dp[mask];
    int flag=0;
    long ret=10000;
    for(int i=0;i<10;i++)
    {
        long r1=1000,a;
        if(Check(mask,i)&&Check(mask,i+1)&&Check(mask,i+2)==0)
        {
            a=mask;
            a=Reset(a,i);
            a=Reset(a,i+1);
            a=Set(a,i+2);
            r1=bitmask(a);
            flag=1;
        }
        else if(Check(mask,i)==0&&Check(mask,i+1)&&Check(mask,i+2))
        {
            a=mask;
            a=Set(a,i);
            a=Reset(a,i+1);
            a=Reset(a,i+2);
            r1=bitmask(a);
            flag=1;
        }
        ret=min(ret, r1);
    }
   if(flag==0) return nom(mask);
    return dp[mask]= ret;

}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long mask=0,tot=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='o') mask=Set(mask,i),tot++;
        }

        memset(dp,-1,sizeof(dp));
        cout<<bitmask(mask)<<endl;

    }
 return 0;
}
