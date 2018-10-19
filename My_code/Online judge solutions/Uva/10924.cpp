#include<stdio.h>
#include <string.h>
#include <ctype.h> 
#include<math.h>
int is_prime(int n)
{
	int i;
for (i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
}
int main()
{
	char a[10000];
	int l,t,i,x;
	while(gets(a))
    {
	 l=strlen(a);
	 t=0;
	 for(i=0;i<l;i++)
	 {
	   if(isupper(a[i]))
	   {
	     x=a[i]-38;
		 t=t+x;
	   }
	   else
	   {
	    x=a[i]-96;
		t=t+x;
	   }
	 }
	 if(is_prime(t)==1)
	     printf("It is a prime word.\n");
	 else
		 printf("It is not a prime word.\n");
	}
return 0;
}