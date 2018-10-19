#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   long int n,x,ans,s;
   while(scanf("%ld",&n)==1)
   {
      if(n==0)
         break;
     
         x=1;
         while(x<n)
         {
            x=x*2;
            s=x%n;
            ans=n-s;
         }
		 if(n==1)
			 ans=1;
         printf("%ld\n",ans);
      
   }
   return 0;
}