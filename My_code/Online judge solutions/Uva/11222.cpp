#include<stdio.h>
#include<math.h>
int main()
{
	long t,test;
	scanf("%ld",&test);
	for(t=0;t<test;t++)
	{
	long int v,s1,c1n,c2n,c3n,c1x,c2x,c3x,max,min,s2,s3,j,a1[10001]={0},a2[10001]={0},a3[10001]={0};
		scanf("%ld",&s1);
		max=0;
		min=0;
		for(j=0;j<s1;j++)
		{
			
            scanf("%ld",&v);
			if(j==0)
			{
				max=v;
				min=v;
			}
			if(v>max)
				max=v;
			if(v<min)
				min=v;
			a1[v]=1;
		}
		c1x=max;
		c1n=min;
		scanf("%ld",&s2);
		max=0;
		min=0;
		for(j=0;j<s2;j++)
		{	
			scanf("%ld",&v);
			if(j==0)
			{
				max=v;
				min=v;
			}
			if(v>max)
				max=v;
			if(v<min)
				min=v;
            if(a1[v]==1)
		       a1[v]=2;
			else
			  a2[v]=1;
			 
			
		}
		c2x=max;
		c2n=min;
		scanf("%ld",&s3);
     max=0;
		min=0;
		for(j=0;j<s3;j++)
		{	
			scanf("%ld",&v);
			if(j==0)
			{
				max=v;
				min=v;
			}
			if(v>max)
				max=v;
			if(v<min)
				min=v;
			if(a1[v]==2)
			  a1[v]=0;
           else if(a1[v]==1)
		     a1[v]=2;
		   else if(a2[v]==1)
			   a2[v]=2;
		   else
			   a3[v]=1;
		}
       c3x=max;
		c3n=min;
		s1=0;
       for(j=c1n;j<=c1x;j++)
	   {
		   if(a1[j]==1)
		   {
			   a1[s1]=j;
		     s1++;
		   }
		
	   }
       s2=0;
       for(j=c2n;j<=c2x;j++)
	   {
		   if(a2[j]==1)
		   {
			   a2[s2]=j;
		     s2++;
		   }
	   }
				s3=0;
			for(j=c3n;j<=c3x;j++)
			{
				if(a3[j]==1)
				{
				   a3[s3]=j;
				   s3++;
				}
			}
		
			printf("Case #%ld:\n",t+1);
			  if(s1>=s2 && s1>=s3)
			  {
				  printf("1 %ld",s1);
			         for(j=0;j<s1;j++)
		            	printf(" %ld",a1[j]);
					  printf("\n");
			  }
			 
			  if(s2>=s1 && s2>=s3)
			  {
			       printf("2 %ld",s2);
			         for(j=0;j<s2;j++)
		            	printf(" %ld",a2[j]);
					  printf("\n");
			  }
			  
			  if(s3>=s1 && s3>=s2)
			  {
			   printf("3 %ld",s3);
			         for(j=0;j<s3;j++)
		            	printf(" %ld",a3[j]);
					  printf("\n");
			  }
			
	}
return 0;
}