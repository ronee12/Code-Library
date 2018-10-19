#include<stdio.h>
int main()
{
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	int s,d,f1,f2;
		scanf("%d%d",&s,&d);
     if((s+d)%2==0)
	 {
	 f1=(s+d)/2;
	 f2=s-f1;
	 if( f1>=0 && f2>=0)
	 {
              if(f1>f2)
	             printf("%d %d\n",f1,f2);
			  else
                   printf("%d %d\n",f2,f1);
	 }
	 else
        printf("impossible\n");
	 }
	 else
		 printf("impossible\n");
	}
return 0;
}