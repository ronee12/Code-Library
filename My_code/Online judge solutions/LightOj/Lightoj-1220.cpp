
#include<bits/stdc++.h>
#define PI 3.1415926535897932384
#define p_b(x) push_back(x)
#define m_p(x) make_pair(x)
#define ft first
#define sd second
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
typedef pair<int,int> pint;
typedef pair<lint,lint> plint;
typedef pair<llint,llint> pllint;
vector<lint>prime;
int PrimeNumber()
{
    bitset<46345> checkPrime;
    for(int i=3; i<=sqrt(46343); i+=2)
    {
        if(!checkPrime[i])
            for(int j=i*i; j<=46343; j+=i)
                checkPrime[j]=1;
    }
    prime.p_b(2);
    for(int i=3; i<=46343; i+=2)
        if(!checkPrime[i])
            prime.p_b(i);
    return prime.size()-1;
}
int PrimeFactor(llint n)
{
    int len=prime.size()-1;
    lint sq=sqrt(n*1);
    int counter=0,ans=0;
    for(int i=0; i<=len && prime[i]<=sq; i++)
    {
        ans=0;
        if(n==1)
        break;
        while(n%prime[i]==0)
        {
            n/=prime[i];
            ans++;
        }
        if(ans)
        counter=__gcd(counter,ans);
        sq=sqrt(n*1);
    }
    if(n>1)
        counter=1;
    return counter;
}
int jonroy(int n)
{
    int maxi=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
          {
              int b=n/i;
              if(i%2)
                maxi=max(maxi,i);
              if(b%2)
                maxi=max(maxi,b);
          }
    }
    return maxi;
}
int main()
{

    llint n;
    int TestCase;
    PrimeNumber();
    cin>>TestCase;
    for(int i=1;i<=TestCase;i++)
    {
        cin>>n;
        bool flag=false;
        if(n<0)
        {
            flag=true;
            n=-n;
        }
        int b=PrimeFactor(n);
        if(!flag)
        printf("Case %d: %d\n",i,b);
        else
        {
            if(b&1)
            printf("Case %d: %d\n",i,b);
            else
            {
                int m=jonroy(b);
            printf("Case %d: %d\n",i,m);
            }
        }
    }
    return 0;
}
