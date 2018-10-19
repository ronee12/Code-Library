#include<stdio.h>
#include<math.h>
nod(int n)
{
long int i,c=0;
	for(i=1;i<=sqrt(n);i++)
		if((n%i)==0)
			if(n/i==i)
				c=c+1;
			else
			   c=c+2;
return (c);
}
int main()
{
  long int n,c,i,u,l,k,t,tt;
  scanf("%ld",&tt);
  for(t=0;t<tt;t++)
  {
	  n=0;
  scanf("%ld%ld",&l,&u);
  for(i=l;i<=u;i++)
  {
     c=nod(i);
       if(c>n)
	   {
		   k=i;
		   n=c;
	   }
  }
  printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",l,u,k,n);
  }
return 0;
}