#include<stdio.h>
int main()
{
int i,x=0,m,p,a,b;
printf("Enter the first and second value:");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
c=i*i;
m=a*a;
p=b*b;
if(c>=m&&c<=p)
x=x+1;
}
printf("%d",x);
return 0;
}