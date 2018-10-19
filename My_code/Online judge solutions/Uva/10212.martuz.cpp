#include <iostream>
#include <cstdio>
#include <algorithm>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
/*/#define size 1000000*/
int main()
{
	long y,m,i;
	
	/*	a1=(int*)malloc(size*sizeof(int));
		for(i=0; i<1000000; i++)
			a1[i]=0;*/
	while(scanf("%ld %ld",&y,&m)!=EOF)
	{
		int a1[100000]={0};
		long lena,cary,b,j,x,k;
		x=y-m+1;
		a1[0]=1;
		lena=1;
		for(k=x; k<=y; k++)
		{
			cary=0;
			int p=0;
			//for(i=0;i<lena;i++)
		//	{
			//	if(a1[0]>0)
			//	{
				cary=a1[0]*k+cary;
				a1[0]=cary%10;
                  if(a1[0]>0)
					  p=1;
				cary=cary/10;
				//i++;
               // break;
			//	}
				printf("o");
		//	}
				i=0;
			if(p==0)
			{
			if(cary>0)
				b=cary;
			while(b!=0)
			{
			
				a1[i]=b%10;
				if(a1[i]>0)
				{
					a1[0]=b%10;
					break;
				}
			//	printf("%d",a1[i]);
				b=b/10;
				i=i+1;
			}
			}
			//
			lena=i;
		/*	for(j=0;j<i-1;j++)
				printf("%d ",a1[j]);*/
		//	printf("\n");
		}
		printf("%d",a1[0]);
		for(j=0;j<lena;j++)
			if(a1[j]>0)
			{
				printf("%d\n",a1[j]);
				break;
			}
	}
	return 0;
}