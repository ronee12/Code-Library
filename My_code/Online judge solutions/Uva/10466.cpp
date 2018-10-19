#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include<set>
#include<string>

#define PI 3.14159265358979323846264338327950
#define pi 2*acos(0.0)
#define eps 1e-9

using namespace std;



int main()
{
	long n,T;
	//double d=acos(.654);
	//printf("%lf ",d*180.0/PI);
	while(scanf("%ld%ld",&n,&T)!=EOF)
	{
		long r[1000]={0},t[1000]={0},i;
		double angle,x,y;
		for(i=0;i<n;i++)
			scanf("%ld%ld",&r[i],&t[i]);
			angle = ((T%t[0]) * 360.0) / (double)t[0];
                x = r[0] * cos((angle*PI)/180.00);
                y = r[0] * sin((angle*PI)/180.00);
                 printf("%.4lf",sqrt(x*x+y*y));
			for(i=1;i<n;i++)
			{
			    angle = ((T%t[i]) * 360.0) / (double)t[i];
                x += r[i] * cos((angle*PI)/180.00);
                y += r[i] * sin((angle*PI)/180.00);
                printf(" %.4lf",sqrt(x*x+y*y));
			}
			printf("\n");
	}
	return 0;
}
