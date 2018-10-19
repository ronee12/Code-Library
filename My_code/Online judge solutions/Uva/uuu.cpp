#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
float r,p,z;
r=0.5;
scanf("%d%d",&x,&y);
if(0<x&&x<=2000 && 0<=y&&y<=2000)
{
if(x%5==0)
{
p=(x+r);
z=(y-p);
printf("%f",z);
}
else
printf("%d",y);
}
else
printf("incorrect input data");
return(0);
}