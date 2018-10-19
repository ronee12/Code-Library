#include<stdio.h>
#include<string.h>
int main()
{
	int t=0;
	char n[100000];
while(scanf("%s",n)!=EOF)
{
	if(t>0)
			printf("\n");
		t=1;
		int temp,i,l,temp1,temp2,temp3,temp4,c=0;
	l=strlen(n);
	temp=0;
	for(i=0;i<l;i++)
	{
	  temp=10*temp+n[i]-48;
	  temp=temp%400;
	}
	temp1=0;
    for(i=0;i<l;i++)
	{
	  temp1=10*temp1+n[i]-48;
	  temp1=temp1%4;
	}
	temp2=0;
    for(i=0;i<l;i++)
	{
	  temp2=10*temp2+n[i]-48;
	  temp2=temp2%100;
	}
	temp3=0;
     for(i=0;i<l;i++)
	{
	  temp3=10*temp3+n[i]-48;
	  temp3=temp3%15;
	}
	 temp4=0;
	  for(i=0;i<l;i++)
	{
	  temp4=10*temp4+n[i]-48;
	  temp4=temp4%55;
	}
	if(temp==0)
	{
         printf("This is leap year.\n");
	 if(temp3==0)
		 {
		printf("This is huluculu festival year.\n");
        c=1;
		 }
        if(temp4==0)
          {
		printf("This is bulukulu festival year.\n");
          c=1;
		}
         c=1;
	}
    else if(temp1==0)
	{
	             	if(temp2!=0)
					{
                      printf("This is leap year.\n");
					  	if(temp3==0)
						 {
	                     	printf("This is huluculu festival year.\n");
                            c=1;
						 }
                        if(temp4==0)
						{
	                     	printf("This is bulukulu festival year.\n");
                            c=1;
						}
	                	 c=1;
					}
	}
	if(temp3==0&&c==0)
	{
        	printf("This is huluculu festival year.\n");
	c=1;
	}
	if(c==0)
		printf("This is an ordinary year.\n");
	printf("\n");
}
return 0;
}