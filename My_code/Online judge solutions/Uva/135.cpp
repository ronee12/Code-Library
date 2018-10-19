#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define siz 47900//16//00
#define sez 30
char store[siz][15]={0};
int k=0,n,s;
	double sum=0;
		int k1=0,chk;
double permute(char *str, const int strt, const int len)
{
	long int i = strt,l;
	l=len;
	long int j;
	char temp;
	for ( i = strt; i < len-1; ++i )
	{
		for ( j = i+1; j < len; ++j )
		{
			temp = str[i], str[i] = str[j], str[j] = temp;
			permute(str, i+1, len);
			temp = str[i], str[i] = str[j], str[j] = temp;
		}
	}
	chk=0;
//	printf("%s\n",str);
   	for(int p=0;p<k1;p++)
		if(strcmp(str,store[p])==0)
			chk=1;
		if(chk==0)
		{
			strcpy(store[k1],str);
			k1++;
			s=0;
			for(j=0;j<l;j++)
			{
				s=s*10+str[j]-48;
			}
			sum=sum+s;
		}
		k++;
		return sum;
}
int main()
 {
	long n;
	while(scanf("%ld",&n)!=EOF)
	{
	
		if(n==0)
			break;
		k=0;
		store[siz][15]=0;
		long int i,l,number[100]={0};
		char a[100]={0},temp[100]={0};
		char str[100]={0};
		for(i=0;i<n;i++)
			scanf("%d",&number[i]);
		for(i=0;i<n;i++)
			a[i]=number[i]+48;
		l=n;
		strcpy(str,a);
		long int j=0;
	    k1=0;
		k=0;
    	sum=0;
		permute(str, 0, l);
		printf("%.lf\n",permute(str, 0, l));
	}
return 0;
}
