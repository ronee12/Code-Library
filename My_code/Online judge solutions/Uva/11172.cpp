#include<stdio.h>
int main()
{
int i,a,b;
printf("Enter the  number:");
for(i=0;i<3;i++)
{
scanf("%d%d",&a,&b);
if(a<b)
printf("<");
else if(a>b)
printf(">");
else if(a=b)
printf("=");
}
return 0;
}