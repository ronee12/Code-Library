#include<stdio.h>
int main()
{
long t=1,a[100],p,n,c,i,x,y,aa,j;
double s,s1,s2,s3;
	while(scanf("%ld",&n)!=EOF)
	{
		double max=0;
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
		{
			s=1;
			for(j=i;j<n;j++)
			{
                 s=s*a[j];
				 if(s>max)
					 max=s;

			}
			
		}
	  printf("Case #%ld: The maximum product is %.lf.\n\n",t++,max);
           
	 
	}
return 0;
}

	/*	s=1;
		c=0;
		s1=1;
		int w=0;
		p=0;
	  for(i=0;i<n;i++)
	  {
		  scanf("%ld",&aa);
		  a[i]=aa;
		  if(a[i]>0)
		  {
			
			  s=s*a[i];
			  c++;
		  }
		  else if(a[i]<0)
		  {
			  if(p==0)
				  x=a[i];
				 
			 
			  p++;
	
				  y=a[i];
			  s1=s1*a[i];
		  }
	  }

	  if(s1<0)
	  {
		  s2=s1/x;
		  s3=s1/y;
		  if(s2>s3)
			  s1=s2;
		  else
			  s1=s3;
	  }
	if((p==1 && c==0)||(p==0 && c==0))
		  s=0;
	  printf("Case #%ld: The maximum product is %.lf.\n\n",t,s*s1);
	  t++;*/