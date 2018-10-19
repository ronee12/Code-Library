#include<stdio.h>
#include<math.h>
int main()
{
  long m,n,i,j,a[10001],b[10001],c,k,t=1;
	while(scanf("%ld%ld",&m,&n)!=EOF)
	{
		if(m==0 || n==0)
			break;
	  for(i=0;i<m;i++)
	  {
	    scanf("%ld",&a[i]);
	  }
	    printf("CASE# %ld:\n",t);
	  t++;
	  for(j=0;j<n;j++)
	  {
		  scanf("%ld",&b[j]);
		 k=0;
		 c=0;
      for(i=0;i<m;i++)
	  {
	    if(a[i]<b[j])
			c++;
		if(a[i]==b[j])
			k=1;
	  }
	
	  if(k==1)
		  printf("%ld found at %ld\n",b[j],c+1);
	  else
		  printf("%ld not found\n",b[j]);
	 }
	}
	return 0;
}







