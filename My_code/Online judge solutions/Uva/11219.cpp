#include<stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2,x,y,z;
	printf("give the current date,month,year first & then ur date of birth\n");
		scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
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
	printf("your age is %d-years %d-months %d-days\n",z,y,x);
return 0;
}