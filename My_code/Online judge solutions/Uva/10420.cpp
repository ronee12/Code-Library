#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include <iostream>
int main()
{
int i,j,c[5000],n,f,l,k;
char a[2050][200]={0},b[2050][200]={0},temp[2005]={0},st[1000]={0},st1[1000]={0};
 scanf("%d",&n);
getchar();
 for(i=0;i<n;i++)
 {
	 gets(st);
	 l=strlen(st);
	 j=0;
	 for(k=0;k<l;k++)
	 {
	   if(st[k]!=' ')
	   {
	     while(st[k]!=' ')
		 {
		   a[i][j++]=st[k];
		   k++;
		   if(k==l)
			   break;
		   
		 }
		 break;
	   }
	 }
 }
 for(i=0;i<n-1;i++)
for(j=0;j<n-1;j++)
if(strcmp(a[j],a[j+1])>0)
{
 strcpy(temp,a[j]);
strcpy(a[j],a[j+1]);
strcpy(a[j+1],temp);
}
c[0]=0;
f=0;
 strcpy(temp,a[0]);
 strcpy(b[0],a[0]);
for(j=0;j<n;j++)
for(i=j;i<n;i++)
 {

   if(strcmp(temp,a[i])==0)
   {
          c[f]=c[f]+1;
			    j++;
   }
   else
   {
	   f++;
	   c[f]=0;
       strcpy(temp,a[i]);
	   strcpy(b[f],a[i]);
	   j--;
	   break;
   }
 }
for(i=0;i<f+1;i++)
printf("%s %d\n",b[i],c[i]);
return 0;
}