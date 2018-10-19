#include<stdio.h>
int main()
{
	int t,i;
      scanf("%d",&t);
	for(i=0;i<t;i++)
	{
int i=1,n,j,k=0,l;
scanf("%d",&j);
for(n=1;n<500;n++){
if(i>=j)
break;
i=i+n;
k=k+1;}
printf("Case %d: %d",i-1,k);
	}
return(0);
}