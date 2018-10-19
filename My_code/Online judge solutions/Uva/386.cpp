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
int partition(int s[], int l, int h)
{
	int i;         /* counter */
		int p;     /* pivot element index */
	int firsthigh; /* divider position for pivot */
	p = h;
	firsthigh = l;
	for (i=l; i<h; i++)
		if (s[i] < s[p])
		{
			swap(*&s[i],*&s[firsthigh]);
			firsthigh ++;
		}
		swap(*&s[p],*&s[firsthigh]);
		return(firsthigh);
}

void quicksort(int s[], int l, int h)
{
	int p;         /* index of partition */
	if ((h-l)>0)
	{
		p = partition(s,l,h);
		quicksort(s,l,p-1);
		quicksort(s,p+1,h);
	}
}
int main()
{
	int i,j,k,l,x=200,a1[5],str[20][5],s,s1,temp,ii;
	long q,a=0,b=0,c=0,p=0;

    for(i=2;i<=x;i++)
	{
		ii=0;
		for(j=2;j<x;j++)
			for(k=2;k<x;k++)
				for(l=2;l<x;l++)
				{
					q=pow(l,3)+pow(k,3)+pow(j,3);
					if(q==pow(i,3))
					{
						a1[0]=j;a1[1]=k;a1[2]=l;
						quicksort(a1,0,2);
						str[ii][0]=a1[0];
						str[ii][1]=a1[1];
						str[ii][2]=a1[2];
						ii++;
					}
				}
				for(s=0;s<ii-1;s++)
					for(s1=0;s1<ii-1;s1++)
						if(str[s1][0]>str[s1+1][0])
						{
						  temp=str[s1][0];
                          str[s1][0]=str[s1+1][0];
						  str[s1+1][0]=temp;

						  temp=str[s1][1];
                          str[s1][1]=str[s1+1][1];
						  str[s1+1][1]=temp;

						  temp=str[s1][2];
                          str[s1][2]=str[s1+1][2];
						  str[s1+1][2]=temp;

						}
				for(s=0;s<ii;s++)
				{
					if(str[s][0]!=str[s+1][0])
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,str[s][0],str[s][1],str[s][2]);
				}
	}
	return 0;
}

