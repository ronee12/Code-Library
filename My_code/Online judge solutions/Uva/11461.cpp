
#include<stdio.h>
int main()
{
int i,a,b,p,x=0;
printf("Enter first and second value:");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
p=i*i;
if(p>=a&&p<=b)
x=x+1;
}
printf("square number=%d",x);
return 0;
}
