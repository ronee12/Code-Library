#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,c,l,u,temp,ii,cc=0;
		char a[1000000],aa[2];
	while(scanf("%s",a)!=EOF)
	{
	  scanf("%d",&n);
	  cc=cc+1;
	 printf("Case %d:\n",cc);
	  for(ii=0;ii<n;ii++)
	  {
		  c=0;
	    scanf("%d%d",&l,&u);
             if(l>u)
			 {
				 temp=l;
				 l=u;
				 u=temp;
			 }
			 for(i=l;i<=u;i++)
			 {
				 aa[0]=a[l];
			   if(a[i]!=aa[0])
				   c=1;
			 }
			 if(c==0)
			     printf("Yes\n",c);
			 else
				 printf("No\n");
	  }
	}
return 0;
}