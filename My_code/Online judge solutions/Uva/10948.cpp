#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	if(n==2)
    return 1;
	else
	{
for (i=2; i<=(int) sqrt(n); i++) 
if (n%i == 0) 
return 0;
return 1;
	}
return 1;
}
int main()
{
	int p,nn,x,c;
while(scanf("%d",&nn)!=EOF)
{
	if(nn==0)
		break;
	p=2;
	c=0;
	while(p<=(nn/2))
	{
	   x=(nn-p);
	   if(is_prime(x)==1 && is_prime(p)==1)
	   {
		   c=1;
		   break;
	   }
     if(p==2)
		 p=p+1;
	 else
         p=p+2;
	}
	if(c==1)
	  printf("%d:\n%d+%d\n",nn,p,x);
	else
		printf("%d:\nNO WAY!\n",nn);
}
return 0;
}