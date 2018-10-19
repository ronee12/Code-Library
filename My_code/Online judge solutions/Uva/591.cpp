#include<stdio.h>                                                            
int main()
{
	long int n,x=0;
	while(scanf("%ld",&n)!=EOF)
	{
		 long int i,a[100],total=0,p,ans=0;
		x=x+1;
		if(n==0)
			break;
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(i=0;i<n;i++)
		total=total+a[i];
	p=total/n;
	for(i=0;i<n;i++)
	{
	if(a[i]>p)
		ans=ans+a[i]-p;
	}
	printf("Set #%ld\n",x);
	printf("The minimum number of moves is %ld.\n",ans);
	printf("\n");
	}
return 0; 
}