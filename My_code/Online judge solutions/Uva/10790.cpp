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
	long num1,num2,test=1,an,bn,i,j,x,k;
	char st[100]={0},st1[100]={0};
      while(scanf("%ld %ld",&num1,&num2)!=EOF)
	  {
		  if(num1==0||num2==0)
			  break;
		  printf("Case %ld: ",test++);
		  if(num1==1||num2==1)
			  printf("0\n");
		  else
		  {
		  an=num1*num2;
		  bn=(num1-1)*(num2-1);
		  i=0;
		  while(an!=0)
		  {
		    st[i]=an%10+48;
			an=an/10;
			i++;
		  }
		  k=0;
		   while(bn!=0)
		  {
		    st1[k]=bn%10+48;
			bn=bn/10;
			k++;
		  }
		char a[10000]={0},b[10000]={0};
         for(j=i-1,x=0;j>=0;j--,x++)
		     a[x]=st[j];
		  for(j=k-1,x=0;j>=0;j--,x++)
		     b[x]=st1[j];
		  long int l1,l2,i,j,temp=0,m=0,c[1000],d[1000],s1[1000]={0},l;
		  int s[100]={0};
    l1=strlen(a);
	l2=strlen(b);
	for(i=l1;i>0;i--)
		c[l1-i]=a[i-1]-48;
	for(i=l2;i>0;i--)
		d[l2-i]=b[i-1]-48;
	for(i=0;i<l2;i++)
	{
		temp=0;
		for(j=0;j<l1;j++)
		{
		temp=s[i+j]+c[j]*d[i]+temp;
		s[i+j]=temp%10;
		m=m+1;
		temp=temp/10;
		}
		if(temp>0)
		{
			s[i+j]=temp;
			m=m+1;
		}
	}
	int cc=0;
	for(i=0;i<m;i++)
	{
	   if(s[i]!=0)
		   cc=1;
	}
	if(cc==1)
	{
		j=0;
	for(i=m+1;i>=0;i--)
		if(s[i]>0)
        for(i=i;i>=0;i--)
		{
		 st1[j]=s[i]+48;
		 j++;
		}
		st1[j]='\0';
	}
	else
	{
		st1[0]=48;
		st1[1]='\0';
	}
	l=strlen(st1);
		int b1;
   b1=4;
		temp=0;
	for(i=0;i<l;i++)
	{
	temp=temp*10+st1[i]-48;
    s[i]=temp/b1;
	temp=temp%b1;
	}
	for(i=0;i<l;i++)
		if(s[i]>0)
			for(;i<l;i++)
	printf("%d",s[i]);
	printf("\n");
		  }
	  }
return 0;
}