#include <iostream>
#include <cstdio>
#include <algorithm>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long y,m;
	while(scanf("%ld %ld",&y,&m)!=EOF)
	{
		long lena,cary,b,x,k,d,p;
		x=y-m+1;
		lena=1;
		d=x;
		for(k=x+1; k<=y; k++)
		{
			cary=0;
			p=0;
	
             cary=d*k+cary;
			 	d=cary%10;
				if(d>0)
					p=1;
			if(p==0)
			{
			if(cary>0)
				b=cary;
	
			while(b!=0)
			{
				d=b%10;
				if(d>0)
					break;
			
				b=b/10;
			}
			}
			printf("%d %d\n",k,d);
	
		
		}
			printf("%ld\n",d);
	
	}
	return 0;
}