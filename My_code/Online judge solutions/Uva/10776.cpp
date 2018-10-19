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

string s,res;
int taken[40]={0},n;

void call(int j)
{
	if(res.size()==n)
	{
	    rep(k,n) cout<<res[k];
	    cout<<endl;
		return;
	}
	for(int i=j;i<s.size();i++)
	{
		if(taken[i]==0)
		{
			taken[i]=1; res+=s[i];
			call(i+1);
			taken[i]=0; res.erase(res.end()-1);
		}
		while(s[i]==s[i+1]) i++;
	}
}
int main()
{
	while(cin>>s>>n){
	sort(s.begin(),s.end());
	call(0);
	}
}
