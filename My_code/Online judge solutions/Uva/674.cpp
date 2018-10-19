#include<stdio.h>
int main()
{
	long n,s[10000];
 for(n=1;n<=7489;n++)
 {
	 long coin[]={50,25,10,5,1},i,j,c,m[100000]={0};
	 m[0]=1;
 for(i=0;i<5;i++)
 {
 c=coin[i];
 for(j=c;j<=n;j++)
	 m[j]=m[j]+m[j-c];
 }
 s[n]=m[n];
 }
 s[0]=1;
while(scanf("%ld",&n)!=EOF)
printf("%ld\n",s[n]);	
return 0;
}
