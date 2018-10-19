#include<stdio.h>
#include<math.h>
long bs(long int a[],long int n,long int l,long int u)
{
	long int mid;
  if(l>u)
  {
	  return u;
  }
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  bs(a,n,l,mid-1);
	  else
	  bs(a,n,mid+1,u);
}
int main()
{
	long int i,a[100000],m,n,b,j,f,l,r;
	
      while(scanf("%ld",&n)!=EOF)
	  {	
    	 for(i=1;i<=n;i++)
		   scanf("%ld",&a[i]);
	 scanf("%ld",&m);
	 for(i=0;i<m;i++)
	 {
	   scanf("%ld",&b);
	  if(b>a[n])
		   printf("%ld X\n",a[n]);
	   else if(b<a[1])
		   printf("X %ld\n",a[1]);
	   else
	   {
	   r=bs(a,b,1,n);
	    if(a[r]==b)
		{
			f=0;
			l=0;
				for(j=r-1;j>=1;j--)
					if(a[j]<b)
					{
						l=1;
						printf("%ld",a[j]);
					break;
					}
					if(l==0)
					printf("X");
          	for(j=r+1;j<=n;j++)
				if(a[j]>b)
				{
					f=1;
					printf(" %ld\n",a[j]);
					break;
				}
				if(f==0)
					printf(" X\n");
		 
		}
		else 
		  printf("%ld %ld\n",a[r],a[r+1]);
		}
	 }
	  }
return 0;
}