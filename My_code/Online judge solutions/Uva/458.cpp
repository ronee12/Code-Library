#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
  char a[10000];
  while(gets(a))
  {
  l=strlen(a);
  for(i=0;i<l;i++)
	  a[i]=a[i]-7;
  printf("%s\n",a);
  }
return 0;
}