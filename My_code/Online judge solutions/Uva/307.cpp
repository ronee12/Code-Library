#include<stdio.h>
#include<math.h>
int main()
{
	long int a[1000],n;
		while(scanf("%ld",&n)!=EOF)
		{
			if(n==0)
				break;
			long int x,m=0,i;
		  for(i=0;i<n;i++)
			  scanf("%ld",&a[i]);
		  x=a[0];
		  for(i=0;i<n;i++)
		  {
			  m=m+a[i];
			  if(a[i]>x)
				  x=a[i];
		  }
		  for(i=x;i<=m;i++)
		  {
		      if(m%i==0)
			  break;
		  }
		  printf("%ld\n",i);
		}
return 0;
}