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
bool is_palindrome(const string &s, int start, int end) {
 int sz = end - start + 1;
if (sz % 2 == 0) {
  int middle = start + sz/2;
    int i;
  for (i = 0; middle - 1 - i >= 0 && middle+i <= end && s[middle-1-i] == s[middle+i]; i++);
   if (middle - i - 1 < 0 || middle+i > end)
    return true;
 } else {
   int middle = start + sz/2;
int i;
 for (i = 1; middle - i >= 0 && middle+i <= end && s[middle-i]==s[middle+i]; i++);
   if (middle - i < 0 || middle+i > end)
return true;
 }
return false;
}
//Polya-Burnside theory : (n^6+3n^4+12n^3+8n^2)/24
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
double area_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double a;
    a=x1*(y2-y3)+y1*(x3-x2)+((x2*y3)-(y2*x3))+eps;
    a=a/2+eps;
return a;
}
double dist_2point(double x1,double y1,double x2,double y2)
{
    double d;
    d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return d;
}
int binary_search(int a[],int n,int l,int u)
{
	int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  binary_search(a,n,l,mid-1);
	  else
	  binary_search(a,n,mid+1,u);
}
int gcd(int a,int b)
{
while(b>0)
{
a=a%b;
a=a^b;
b=b^a;
a=a^b;
}
return a;
}
long lcm(long a,long b)
{
    long x=(a*b)/gcd(a,b);
    return x;
}
long is_prime(long n)
{
	long ii;
if (n == 1)
 return 0;
if (n == 2)
 return 1;
if (n%2 == 0)
 return 0;
for (ii=3;ii*ii<=n;ii=ii+2)
     if (n%ii == 0)
           return 0;
return 1;
}



int main()
{
ios_base::sync_with_stdio(false);


int i=0,m,n;
while(cin>>m)
{
    i=0;
string a[10001];
map<string,int> mp;
while(m--)
{
    cin>>a[i];
    mp[a[i]]=1;
i++;
}
int j,l;
string s;
cin>>n;
while(n--)
{
    cin>>s;
if(mp[s])
{
    cout<<s<<" is correct"<<endl;
  // printf(" is correct\n");
    continue;
}
cout<<s<<" ";
l=s.size();
long c=0,k,signal=1;
  for(j=0;j<i&&signal;j++)
  {
     if(a[j].size()==l)
     {
         c=0;
         if(l>1)
         for(k=0;k<l&&c<2;k++)
         {
             if(a[j][k]!=s[k])
             c++;
         }

         if(c==1||l==1){
             signal=0;
         cout<<"is a misspelling of "<<a[j]<<endl;}
         else {
             int fl=0;
          for(k=0;k<l;k++)
         {
             if(a[j][k]==s[k+1]&&s[k]==a[j][k+1]&&s[k]!=s[k+1])
             {
                 string s1,s2;
                 s1=a[j];
                 s2=s;
                 s1[k]='*';
                 s1[k+1]='*';
                 s2[k]='*';
                 s2[k+1]='*';
                 if(s1==s2)
                 fl=1;
                 break;
             }
         }
         if(fl==1){
              signal=0;
         cout<<"is a misspelling of "<<a[j]<<endl;
         }
         }
     }
     else if(a[j].size()==l-1)
     {
          c=0;
         for(k=0;k<l-1;k++)
         {
             if(a[j][k]!=s[k])
             {
                 string x=s;
           //      cout<<x<<"e"<<endl;
                   x.erase(x.begin()+k);
                   if(x!=a[j])
                   c=1;
                   break;
             }
         }
         if(c==0){
              signal=0;
         cout<<"is a misspelling of "<<a[j]<<endl;
     }}
     else if(a[j].size()==l+1)
     {
          c=0;
         for(k=0;k<l;k++)
         {
             if(a[j][k]!=s[k])
             {
                 string x=a[j];
             //    cout<<x<<"r"<<endl;
                 x.erase(x.begin()+k);
                   if(s!=x)
                   c=1;
                   break;
             }
         }
         if(c==0){
              signal=0;
        cout<<"is a misspelling of "<<a[j]<<endl;
     }
     }
  }
if(signal)
cout<<"is unknown"<<endl;
}
}
return 0;
}
