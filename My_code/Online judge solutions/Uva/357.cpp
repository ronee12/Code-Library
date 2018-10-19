#include<stdio.h>
int main()
{
	long n;
	while(scanf("%ld",&n)!=EOF)
	{
		long coin[]={50,25,10,5,1},i,j,c,m[100000]={0};
 m[0]=1;
 for(i=0;i<5;i++)
 {
 c=coin[i];
 for(j=c;j<=n;j++)
	 m[j]+=m[j-c];
 }
 if(m[n]>1)
 printf("There are %ld ways to produce %ld cents change.\n",m[n],n);
 else
	 printf("There is only 1 way to produce %ld cents change.\n",n);
	}
return 0;
}



