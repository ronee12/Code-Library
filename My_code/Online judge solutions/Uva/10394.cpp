#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 18409300
#define siz 1000220
int main()
{
	long int i,j,v=0,*tw;
	char *prime;
	prime=(char*)malloc(max*sizeof(char));
	tw=(long*)malloc(siz*sizeof(long));
	prime[0]=1;
	prime[1]=1;
    prime[2]=1;
	prime[4]=1;
	for(i=3;i<=4291;i=i+2)
	{
		while(prime[i]!=1)
		{
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			}
			break;
		}
	
	}
	for(i=3;i<=18409201;i=i+2)
	{
		while(prime[i]!=1)
		{
		while(prime[i-2]!=1)
			{
				tw[v++]=i;
				break;
			}
		break;
		}
	}
	long n,p;
	while(scanf("%ld",&n)!=EOF)
	{
          p=tw[n-1];
		   printf("(%ld, %ld)\n",p-2,p);
	}
return 0;
}
