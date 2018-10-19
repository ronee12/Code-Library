#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{

	long int n,r;
while(scanf("%ld",&n)!=EOF)
{
	if(n==0)
		break;
	r=n+1;
	n=2*n;
	
		char a[max]={'1'},b[200]={0},digit[200];
		long i=0,j,ts,rem,k,rem1,l1;
	k=n;
	while(k!=0)
	{
	  rem=k%10;
      k=k/10;
	  digit[i++]=rem+48;
	}
	i=i-1;
	for(j=i;j>=0;j--)
		b[i-j]=digit[j];
    ts=n-r;
for(rem1=0;rem1<ts;rem1++)
{
	long int l2,i,j,temp=0,s[max]={0},m=0,c[max],d[500];
    l1=strlen(a);
	l2=strlen(b);
	for(i=l1;i>0;i--)
	{
		c[l1-i]=a[i-1]-48;

	}
/*	if(a[i-1]!='0')
	  for(j=0;i>0;i--)
	  {
		  c[j++]=a[i-1]-48;
		  printf("%d ",c[j-1]);
	  }
	printf("\n");	*/
	for(i=l2;i>0;i--)
		d[l2-i]=b[i-1]-48;
	/*	if(b[i-1]!='0')
	  for(j=0;i>0;i--)
	  {
		    d[j++]=b[i-1]-48;
			printf("%d ",d[j-1]);
	  }
		//d[l2-i]=b[i-1]-48;
			printf("\n");	*/

	for(i=0;i<l2;i++)
	{
		temp=0;
		for(j=0;j<l1;j++)
		{
		temp=s[i+j]+c[j]*d[i]+temp;
		s[i+j]=temp%10;
		m=m+1;
		temp=temp/10;
		}
		if(temp>0)
		{
			s[i+j]=temp;
			m=m+1;
		}
	}
	long int cc=0;
	for(i=0;i<m;i++)
	{
	   if(s[i]!=0)
		   cc=1;
	}
	if(cc==1)
	{
	for(i=m+1;i>=0;i--)
		if(s[i]>0)
        for(i=i,j=0;i>=0;i--)
			a[j++]=s[i]+48;
	}
	else
		a[0]=0;

     k=n-1;
	 i=0;
   	while(k!=0)
	{
	  rem=k%10;
      k=k/10;
	  digit[i++]=rem+48;
	}
	for(j=i-1;j>=0;j--)
		b[i-j-1]=digit[j];
	b[i-j-1]='\0';
n--;
}
    l1=strlen(a);
	for(i=l1-1;i>0;i--)
		if(a[i]!='0')
		{
			b[0]=a[i];
			break;
		}
		printf("%s\n",a);
}
return 0;
}