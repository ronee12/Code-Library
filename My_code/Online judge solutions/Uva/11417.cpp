#include<stdio.h>
#include<iostream.h>
int main()
{
	int N,G,i,j;
		scanf("%d",&N);
      G=0;
for(i=1;i<N;i++)
{
for(j=i+1;j<=N;j++)

{

    G=G+GCD(i,j);

}
}
printf("%d",G);
return 0;
}