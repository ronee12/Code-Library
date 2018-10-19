/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAXP (1<<16)
int primes[MAXP];
int nprimes = 0;
//#define siz 1000100
int main()
{
	long int i,m,j,v=0,*tw;
	bool comp[MAXP] = {0};
        for ( i = 2; i < MAXP; ++i)
                if (!comp[MAXP])
                {
                        primes[nprimes++] = i;
						printf("%d",i);
                        for (int j = i; j < MAXP; j += i)
                                comp[j] = true;
                }
	long n;
	while(scanf("%ld",&n)!=EOF)
		printf("%ld \n",primes[n]);
		  //printf("(%ld, %ld)\n",tw[n-1]-2,tw[n-1]);
return 0;
}*/


