#include<stdio.h>
int main()
{
	int m,n=0,i;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		n=n+1;
	int d1,d2,m1,m2,y1,y2,x,y,z;
		scanf("%d%*c%d%*c%d%*c%d%*c%d%*c%d",&d1,&m1,&y1,&d2,&m2,&y2);
	if(d1<d2)
	{
		d1=d1+30;
        m2=m2+1;
	}
	x=d1-d2;
	if(m1<m2)
	{
		m1=m1+12;
	    y2=y2+1;
	}
	y=m1-m2;
	z=y1-y2;
	if(z<0)
		printf("Case #%d: Invalid birth date\n",n);
	else if(z>130)
	    printf("Case #%d: Check birth date\n",n);
	else
		printf("Case #%d: %d\n",n,z);
	}
return 0;
}