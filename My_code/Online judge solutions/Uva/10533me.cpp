#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 5000020
#define siz 40000
/*int bs(long int a[],long int n,long int l,long int u)
{
	int mid;
  if(l>u)
	  return 0;
  mid=floor(l+u)/2;
  if(a[mid]==n)
	  return mid;
  else if(a[mid]>n)
	  bs(a,n,l,mid-1);
	  else
	  bs(a,n,mid+1,u);
	 
}*/
int main()
{
	long int j,i,u=0,m;

char *prime;
	prime=(char*)malloc(max*sizeof(char));
	m=sqrt(max)+10;
	for(i=2;i<=m;i++)
	{
		if(prime[i]!=1)
		{
			j=i;
			while((j+i)<=max-2)
			{				
				j=j+i;
				prime[j]=1;
			}
		}
	
	}

	long int s,c,*st,n,x,a,b,t,lb,ub;
	st=(long*)malloc(siz*sizeof(long));
		c=2;
		s=0;
		st[1]=2;
		for(i=3;i<=1000000;i=i+2)
		{
			if(prime[i]!=1)
			{
			n=i;
				s=0;
				while(n>0)
				{
					x=n%10;
					n=n/10;
					s=s+x;
				}
			
				if(prime[s]!=1)
					st[c++]=i;
				
			}
             
		}
	//	printf("f");
		long int lw,up,p,mid;
		scanf("%ld",&t);
		for(i=0;i<t;i++)
		{
			lw=0;
			up=0;
		  scanf("%ld %ld",&a,&b);
		  if(a==b)
		  {
			  	lb = 0;
					ub = 30122;
					mid = (lb+ub)/2;
					while(lb <= ub && a != st[mid])
					{
						if(a < st[mid])
							ub = mid -1;
						else if(a > st[mid])
							lb = mid + 1;
						mid = (lb+ub)/2;
					}
					if(st[mid]==a)
					{
					up=1;
					lw=1;
					}
		     //   p=bs(st,a,0,30126);
			/*	if(p>0)
				{
				 up=1;
				 lw=1;
				}*/
		  }
		  else
		  {
			  lb = 0;
					ub = 30123;

					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(a<st[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(a>st[mid])
                         {
                             lb = mid + 1;
                         }
						 else
						 {
							 up = mid;
							 break;
						 }
						 up = lb;
					 }
                 
					 lb = 0;
					 ub = 30123;
                
					 while(lb <= ub)
					 {
						 mid = (lb + ub)/2;
                         if(b<st[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(b > st[mid])
                         {
                             lb = mid + 1;
                         }
						 else 
						 {
							 lw = mid;
							 break;
						 }
						 lw = ub;
					}
			
               /*  for(j=a;j<=b;j++,a++)
				 {
				 p=bs(st,a,0,30126);
				 if(p>0)
				 {
				   lw=p;
				   break;
				 }
			   
				 }
				 
				  for(j=b;j>=a;j--,b--)
				  {
                        p=bs(st,b,0,30126);
					  if(p>0)
					 {
				   up=p;
				   break;
					 }
					
				  }*/
		  }     
					  if(up==0 && lw==0)
						  up=1;
					 
				 printf("%ld\n",lw-up+1);
		}
	return 0;
}