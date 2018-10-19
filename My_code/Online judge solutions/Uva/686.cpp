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
	if(nn==4)
		c=1;
	while(p<=(nn/2))
	{
	   x=(nn-p);
	   if(is_prime(x)==1 && is_prime(p)==1)
	   {
		   c=c+1;
	   }
     p=p+2;
	}
    
	printf("%d\n",c);
}
return 0;
}