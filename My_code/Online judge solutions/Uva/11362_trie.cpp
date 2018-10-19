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


struct node
{
    int endpoint;
    node *ar[11];
    node()
    {
        endpoint=0;
        for(int i=0;i<11;i++) ar[i]=NULL;
    }
}*root;
int insert(string s)
{
    node *cur=root;
    int f=0,ret=0;
    for(int i=0;i<s.size();i++)
    {
        int p=s[i]-'0';
        if(cur->ar[p]==NULL)
            {
                cur->ar[p]= new node(); f=1;
            }
        cur= cur->ar[p];
        if(cur->endpoint) ret=1;
    }
    if(f==0) ret=1;
    cur->endpoint=1;
    return ret;
}
void del(node *cur)
{
    for(int i=0;i<11;i++)
        if(cur->ar[i]) del(cur->ar[i]);

    delete(cur);
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,res=0;
        string s;
        cin>>n;
        root= new node();
        rep(i,n)
        {
            cin>>s;
            res |= insert(s);

        }
        if(res) cout<<"NO\n";
        else cout<<"YES\n";
        del(root);
    }
    return 0;
}
