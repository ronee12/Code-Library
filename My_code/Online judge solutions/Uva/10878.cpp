#include<stdio.h>
#include<math.h>
int main()
{
	int t=0,p=0,i,j,b[10000];
	char a[100],c[10000]={0};
while(gets(a))
{	
  if(t>0)
  {
	  if(a[0]=='_')
		break;
	
	j=0;
  for(i=0;i<11;i++)
  {
    if(i==0||i==1||i==6||i==10)
		continue;
	if(a[i]==' ')
		b[j++]=0;
	else
		b[j++]=1;
  }

  long s=0,k;

  for(i=j-1,k=0;i>=0;i--,k++)
  {
    s=s+b[i]*pow(2,k);
  }
  c[p++]=s;
  printf("%c",s);
  }
  t++;
}
return 0;
}