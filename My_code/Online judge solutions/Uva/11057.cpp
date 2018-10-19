#include<stdio.h>
int main()
{
	int a,b,x[10000],i,j,temp,w,m=0,c[1000],d[1000],min,sum,ak1,ak2,o,l;
	while(scanf("%d",&a)!=EOF)
	{
		m=0;
		o=1;
	for(i=0;i<a;i++)
		scanf("%d",&x[i]);
	scanf("%d",&b);
	w=a-1;
l=1;
for(i=0;i<a-1;i++)
{
	for(j=0;j<a-l;j++)
	{
        if(x[i]+x[j+l]==b)
		{
		c[m]=x[i];
		d[m]=x[j+l];
			m=m+1;
		}
	}
	l=l+1;
}

	if(c[0]<=d[0])
		{
		  temp=c[0];
		  c[0]=d[0];
		  d[0]=temp;
		}
	min=c[0]-d[0];
	for(i=0;i<m;i++)
	{
		if(c[i]<=d[i])
		{
		  temp=c[i];
		  c[i]=d[i];
		  d[i]=temp;
		}

		sum=c[i]-d[i];
		if(sum<=min)
		{
			min=sum;
			ak1=c[i];
			ak2=d[i];
		}
	}
	printf("Peter should buy books whose prices are %d and %d.\n\n",ak2,ak1);
	}
return 0;
}