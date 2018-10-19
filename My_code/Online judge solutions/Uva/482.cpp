#include<stdio.h>
#include<string.h>
int main()
{
	int c,t;
	scanf("%d",&t);
	getchar();
	getchar();
	for(c=0;c<=t;c++)
	{
	//	if(c>0)
		//	printf("\n");
	int i=0,a[10000],j=0,l,s;
	char b[10000]={0},x[100][100]={0},x1[100]={0};

	gets(b);
	l=strlen(b);
	for(i=0;i<l;i++)
	{
		s=0;
	   if(b[i]!=' ')
	     while(b[i]!=' ')
		 {
		    s=s*10+b[i]-48;
			i++;
			if(i==l)
				break;
		 }

		 a[j]=s;
		 j++;
	   
	}

//	gets(x1);
//	printf("%s\n",x1);
	//	getchar();
	for(i=0;i<j;i++)
	{
	  scanf("%s",x[a[i]]);
	}

		for(i=0;i<j;i++)
			printf("%s\n",x[i+1]);
		getchar();

	}
	return 0;
}