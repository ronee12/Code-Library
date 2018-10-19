#include<stdio.h>
int main()
{
	long int t,j;
scanf("%d",&t);
for(j=1; j<=t; j++)
{
	 long int a,b,i,sum=0;
scanf("%ld%ld",&a,&b);
for(i=a; i<=b;i++)
if(i%2!=0)
{
	sum=sum+i;

}
	printf("Case %ld: %ld\n",j,sum);
}
return 0;
}