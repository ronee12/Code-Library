#include<stdio.h>
int factorial(int n);
int main()
{
int p,n;
while(scanf("%d",&n)!=EOF)
{
p=factorial(n);
if(n==13)
printf("6227020800\n");
else if(n>13)
printf("Overflow!\n");
else if(n<8)
printf("Underflow!\n");
else
       printf("%d\n",p);
}
	   return 0;
}
   int factorial(int n)
   {
   int fact;
   if(n==1)
   return (1);
   else
   fact=n*factorial(n-1);
   return(fact);
   }