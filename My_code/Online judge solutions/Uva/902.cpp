#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define siz 1000000000
int main()
{
	char *a;
	a=(char*)malloc(siz*sizeof(char));
	long int i,n,l,l1,m,k,j;
    while(scanf("%ld %s",&n,a)!=EOF)
	{
		char b[100000][20]={0},temp[20]={0};
	  l=strlen(a);
	  l1=l-n+1;
	  m=0;
	  for(i=0;i<l1;i++,m++)
		  for(j=m,k=0;j<n+m;j++,k++)
	         b[i][k]=a[j];

	  for(i=0;i<l1-1;i++)
		  for(j=0;j<l1-1;j++)
			  if(strcmp(b[j],b[j+1])>0)
			  {
			    strcpy(temp,b[j]);
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],temp);
	
			  }
			  int c[10000]={0};
char bb[10000][20];
			  c[0]=0;
long int f=0;
 strcpy(temp,b[0]);
 strcpy(bb[0],b[0]);
for(j=0;j<l1;j++)
for(i=j;i<l1;i++)
 {

   if(strcmp(temp,b[i])==0)
   {
          c[f]=c[f]+1;
			    j++;
   }
   else
   {
	   f++;
	   c[f]=0;
       strcpy(temp,b[i]);
	   strcpy(bb[f],b[i]);
	   j--;
	   break;
   }
 }
long int max;
max=c[0];
n=0;
for(i=0;i<f+1;i++)
{
  if(max<c[i])
  {
      max=c[i];
	  n=i;
  }
}
		printf("%s\n",bb[n]);
	}
return 0;
}