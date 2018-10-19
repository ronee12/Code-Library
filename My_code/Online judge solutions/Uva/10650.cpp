#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 31378
#define siz 75000
int main()
{
	long int i,j,v=0,prime_store[3400]={0},distance[3400]={0},k,m;
	char *prime;
	prime=(char*)malloc(siz*sizeof(char));
	prime_store[0]=2;
	k=1;
	m=2;
	prime[1]=1;
	for(i=3;i<=max;i=i+2)
	{
		if(prime[i]!=1)
		{
			prime_store[k]=i;
			distance[k-1]=i-m;
			m=i;
			k++;
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			
			}
		}
	
	}
    long a,b,l,u,lw,up,mid,d;
	while(scanf("%ld %ld",&a,&b)!=EOF)
	{
		if(a==0&&b==0)
			break;
		if(a>b)
		{
		  d=a;
		  a=b;
		  b=d;
		}
	  l=0;
	  u=3378;
	  while(l<=u)
	  {
		  mid=(l+u)/2;
		  if(a<prime_store[mid])
			  u=mid-1;
		  else if(a>prime_store[mid])
			  l=mid+1;
		  else
		  {
			  lw=mid;
			  break;
		  }
		  lw=l;
	  }

      l=0;
	  u=3378;
	  while(l<=u)
	  {
		  mid=(l+u)/2;
		  if(b<prime_store[mid])
			  u=mid-1;
		  else if(b>prime_store[mid])
			  l=mid+1;
		  else
		  {
			  up=mid;
			  break;
		  }
		  up=u;
	  }
	  	 int p,x[10];
	  for(i=lw;i<=up;i++)
	  {
		  p=0;
	   if(distance[i]==distance[i+1])
		{
			while(distance[i]==distance[i+1])
			{
				x[p]=prime_store[i];
			  i++;
			  p++;
			  if(i>up)
				  break;
			}
			x[p]=prime_store[i];
			x[p+1]=prime_store[i+1];
				p=p+2;
	  if(p==3) 
	  {
         int xx,xx2;
	     xx=x[0]-distance[i];
	     xx2=x[2]+distance[i];
       if(x[0]>=prime_store[lw] && x[2]<=prime_store[up] && (xx!=prime_store[i-2]) && (xx2!=prime_store[i+2]))
		 {
				 for(j=0;j<p;j++)
				 {
					 if(j>0)
						 printf(" ");
		            printf("%d",x[j]);
				 }
             printf("\n");
		 }
	  }
	  else 
		 {
		  if(x[0]>=prime_store[lw] && x[3]<=prime_store[up])
		  {
		   	 for(j=0;j<p;j++)
				 {
					 if(j>0)
						 printf(" ");
		            printf("%d",x[j]);
				 }
             printf("\n");
		  }
		 }
	   }
	  }
	}	

return 0;
}
