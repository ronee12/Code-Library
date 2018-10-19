#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int x,l,i,b[100];
	char a[100];
while(scanf("%s",&a)!=EOF)
{
	x=0;
	l=strlen(a);
	if(l==1 && a[0]-48==0)
		break;
	for(i=0;i<l;i++)
	{
		b[i]=a[i]-48;
	}
	for(i=l;i>0;i--)
		x=x+b[l-i]*(pow(2,i)-1);
	printf("%d\n",x);
}
return 0;
}