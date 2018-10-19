#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

int main ()
{
	long w,h,n,i,j;
	while(scanf("%ld %ld %ld",&w,&h,&n)!=EOF)
	{
		if(w==0 && h==0 && n==0)
			break;
		char gr[600][600]={0};
		for(i=0; i<w; i++)
			for(j=0; j<h; j++)
				gr[i][j]='0';
		long emt;
		while(n--)
		{
			long x1,y1,x2,y2,xmax,xmin,ymax,ymin;
			scanf("%ld %ld %ld %ld",&x1, &y1, &x2, &y2);
			if(x1>x2)
			{
				xmax=x1;
				xmin=x2;
			}
			else
			{
				xmax=x2;
				xmin=x1;
			}
			if(y1>y2)
			{
				ymax=y1;
				ymin=y2;
			}
			else
			{
				ymax=y2;
				ymin=y1;
			}
			for(i=xmin-1; i<xmax; i++)
				for(j=ymin-1; j<ymax; j++)
					gr[i][j]='1';
		}
		emt=0;
		for(i=0; i<w; i++)
			for(j=0; j<h; j++)
				if(gr[i][j]=='0')
					emt=emt+1;
				if(emt==0)
				printf("There is no empty spots.\n");
				else
					if(emt==1)
						printf("There is one empty spot.\n");
					else
						printf("There are %ld empty spots.\n",emt);
	}
        return 0;
}