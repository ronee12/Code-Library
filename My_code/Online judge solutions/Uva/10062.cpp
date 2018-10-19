#include<stdio.h>
#include<string.h>
int main()
{
	int t=1;
	char a[10000];
	while(gets(a))
	{
	long int j,x=0,m,mm[10000],c[10000],l,count=0,is=0,c1[10000],mm1[10000],i,ii,temp2,k,temp;
	char tempa[2]={0};
	l=strlen(a);
for(i=0;i<l-1;i++)
  for(ii=0;ii<l-1;ii++)
    {
	   if(a[ii]<a[ii+1])
	   {
	     tempa[0]=a[ii];
		 a[ii]=a[ii+1];
		 a[ii+1]=tempa[0];
	   }
	}
	for(i=0;i<l;i=i+x)
	{
		x=0;
	  m=a[i];
	  mm[i]=m;
	  j=i;
	  c[i]=0;
	  while(a[j]==m)
	  {
	    c[i]=c[i]+1;
		x=x+1;
		j=j+1;
	  }
	  mm1[is]=mm[i];
	  c1[is]=c[i];
	  is=is+1;
	  count=count+1;
	}
	j=count;
	if(t>1)
		printf("\n");
	t=t+1;
	for(i=0;i<j-1;i++)
		for(k=0;k<j-1;k++)
			if(c1[k]>c1[k+1])
			{
			temp=c1[k];
			c1[k]=c1[k+1];
			c1[k+1]=temp;
			temp2=mm1[k];
			mm1[k]=mm1[k+1];
			mm1[k+1]=temp2;
			}
			for(i=0;i<j;i++)
				printf("%ld %ld\n",mm1[i],c1[i]);
	}
return 0;
}