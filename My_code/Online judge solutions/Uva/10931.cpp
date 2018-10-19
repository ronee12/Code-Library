#include<stdio.h>
int main()
{
	long int n;
    while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
			break;
	long int x[50],c=0,m=0,i=0,d=0;
	while(n!=0)
	{
	x[i]=n%2;
	if(x[i]==1)
		d=d+1;
	n=n/2;
	c=c+1;
	i=i+1;
	}
    printf("The parity of ");
	for(i=c-1;i>=0;i--)
        printf("%d",x[i]);
	printf(" is %ld (mod 2).\n",d);
	}
return 0;
}