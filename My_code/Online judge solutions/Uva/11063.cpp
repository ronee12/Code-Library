#include<stdio.h>
int main()
{
   int n,t=1,p,i,j,m,c,q;
   int a[110],x[5500];
	   while(scanf("%d",&n)!=EOF)
	   {
		      m=0;
              c=0;
              p=n;
       for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   for(i=0;i<n-1;i++)
		{
	       if(a[i]>a[i+1] || a[i]==0 || a[i+1]==0 || a[i]<0 || a[i+1]<0)
				   c=1;
		}
            for(j=0;j<n-1;j++)
			{
		        for(i=1;i<p;i++)
				{
		           x[m]=a[j]+a[j+i];
			       m=m+1;
				}
		        p=p-1;
			}
		     q=m;
            for(j=0;j<m-1;j++)
			{
	               for(i=1;i<q;i++)
				   {
	                     if(x[j]==x[j+i])
			             	 c=1;
				   }
				   q=q-1;
			}
			if(c==1)
	      printf("Case #%d: It is not a B2-Sequence.\n",t);
			else
     	   printf("Case #%d: It is a B2-Sequence.\n",t);
	   t=t+1;
	   }
   return 0;
}
