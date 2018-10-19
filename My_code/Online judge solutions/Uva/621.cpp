#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 int t,g,l;
 char a[1000];
 scanf("%d",&t);
 for(g=0;g<t;g++)
 {
    scanf("%s",a);
 l=strlen(a);
 if((l==1 && (a[0]=='1' || a[0]=='4')) ||(l==2 && a[0]=='7' && a[1]=='8'))
	 printf("+\n");
 else if(a[l-2]=='3' && a[l-1]=='5')
	 printf("-\n");
 else if(a[0]=='9' && a[l-1]=='4')
	 printf("*\n");
 else if(a[0]=='1' && a[1]=='9' && a[2]=='0')
	 printf("?\n");
 
 }

return 0;
}
