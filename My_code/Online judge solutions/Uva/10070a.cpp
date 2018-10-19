#include<stdio.h>
#include<string.h>
#define MAX 5000
int call_div(char number[],int div)
{
	int len=strlen(number);
	int now;
	int extra=0;
	for(now=0;now<len;now++)
	{
		extra=extra*10+(number[now]-'0');
		extra=extra%div;
	}
	
	return extra;
}
int main()
{
	int t=0;
	char year[MAX];
	while(scanf("%s",year)!=EOF)
	{
		if(t>0)
			printf("\n");
		t=1;
		if(call_div(year,400)==0)
		{
			
			printf("This is leap year.\n");
			if(call_div(year,15)==0)
				printf("This is huluculu festival year.\n");
			if(call_div(year,55)==0)
				printf("This is bulukulu festival year.\n");
			//printf("\n");
			
		}
		else
		{
			
			int p=0;
			if(call_div(year,4)==0&&call_div(year,100)!=0)
			{
				printf("This is leap year.\n");
			if(call_div(year,15)==0)
				printf("This is huluculu festival year.\n");
			if(call_div(year,55)==0)
				printf("This is bulukulu festival year.\n");
				p=1;
			}

			if(call_div(year,15)==0&&p==0)
			{
				p=1;
				printf("This is huluculu festival year.\n");
			}
			if(p==0)
				printf("This is an ordinary year.\n");

			//printf("\n");
		}
	}
	return 0;
}
