#include<stdio.h>
int main()
{
	int ts,c;
	scanf("%d",&ts);
	for(c=0;c<ts;c++)
	{
		if(c>0)
			printf("\n");
	long int i,j,x,tm,a[10000],n;
	double b[10000],t,f,temp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&t,&f);
		a[i]=i;
		b[i]=t/f;
	}
	for(j=0;j<i-1;j++)
		for(x=0;x<i-1;x++)
			if(b[x]>b[x+1])
			{
			   temp=b[x];
			   b[x]=b[x+1];
			   b[x+1]=temp;
			   tm=a[x];
			   a[x]=a[x+1];
			   a[x+1]=tm;
			}
			for(j=0;j<i;j++)
			{
				if(j>0)
					printf(" ");
				printf("%ld",a[j]+1);
			}
			printf("\n");
	}

return 0;
}