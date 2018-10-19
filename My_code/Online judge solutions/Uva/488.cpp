#include<stdio.h>
#include<string.h>
int main()
{
long int i,m,n,j,x,l,t,tt;
scanf("%ld",&tt);
  /*printf("\n");*/
for(t=0;t<tt;t++)
{
scanf("%ld%ld",&n,&l);
	for(x=0;x<l;x++)
	{
		m=1;
	for(i=1;i<=(n*2)-1;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%ld",m);
		}
		printf("\n");
		if(n>i)
		  m=m+1;
		else
			m=m-1;
	}
	/*//if(x<t-1)*/
	if(x<l-1)
      printf("\n");
	}
	if(t<tt-1)
	 printf("\n");
}
return 0;
}