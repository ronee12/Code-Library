#include<stdio.h>
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
	int p,nn,x,c;
while(scanf("%d",&nn)!=EOF)
{
	if(nn==0)
		break;
	p=3;
	c=0;
	while(p<=(nn/2))
	{
	   x=(nn-p);
	   if(is_prime(x)==1 && is_prime(p)==1)
	   {
		   c=1;
		   break;
	   }
     p=p+2;
	}
	if(c==1)
	  printf("%d = %d + %d\n",nn,p,x);
	else
		printf("Goldbach's conjecture is wrong.\n");
}
return 0;
}