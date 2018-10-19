#include<stdio.h>
#include<math.h>
#define MX 1048580
long a[MX]={0},store[MX]={0};

int main()
{
        long i,k,p[100000]={0},j=1,c=0,s,t=0,m;
		p[0]=2;

		for(i=2;i<MX;i=i+2)
			a[i]=1;
		for(i=3;i<MX;i=i+2)
		{
			if(a[i]!=1)
			{
		     	p[j]=i;
				j=j+1;
				for(k=i+i;k<=MX;k=k+i)
					a[k]=1;
			}
		}
		a[2]=0;
		   for(i=0;i<=172;i++)
		   {
		   for(int k=i;k<=44000;k++)
			   if(p[i]*p[k]<1048580)
		      store[p[i]*p[k]]=1;
			   else break;
		   }
            
	long n,x;
	while(scanf("%ld",&n)!=EOF)
	{



		c=0;
		for(i=0;i<n;i++)
		{
		
			scanf("%ld",&x);
			if(store[x]==1)
				c++;
           /* if(a[x]==0)
			 continue;

			m=sqrt(x);
			if(x<4)
				continue;
			else if(m*m==x&&a[m]==0)
			{
				c++;
				continue;
			}
			for(k=0;p[k]<=sqrt(x);k++)
			{
				if(x%p[k]==0)
				{
					printf("%d ",p[k]);
					x=x/p[k];
					printf("%d\n",x);
					if(a[x]==0)
					{
						printf("y\n");
						c++;
					}
					else
						break;
				}
			}*/
		}
		printf("%ld\n",c);
	}
	return 0;
}
