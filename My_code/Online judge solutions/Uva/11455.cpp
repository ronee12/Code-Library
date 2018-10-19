#include<stdio.h>
int main()
{
	long int j,n;
	scanf("%ld",&n);
	for(j=0;j<n;j++)
	{
  long int a[100],i,j,temp;
	scanf("%ld%ld%ld%ld",&a[0],&a[1],&a[2],&a[3]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(a[j]>a[j+1])
			{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
			}
			if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
                        	printf("square\n");
			else if(a[0]==a[1]&&a[2]==a[3])
                        printf("rectangle\n");
			else if(a[0]+a[1]+a[2]>=a[3])
                         printf("quadrangle\n");
			else
					printf("banana\n");


	}

return 0;
}