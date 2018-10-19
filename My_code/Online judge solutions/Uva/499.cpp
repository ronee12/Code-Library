#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int b[10000]={0},c[10000]={0},l,i,m,n,d[1000],k;
	char a[1000],x[1000]={0};
	while(gets(a))
	{
	 l=strlen(a);
	 for(i=0;i<l;i++)
	 {
		 if(isupper(a[i]))
		 b[a[i]-65]=b[a[i]-65]+1;
		 else if(islower(a[i]))
			 c[a[i]-97]=c[a[i]-97]+1;
	 }
	 m=b[0];
	 for(i=0;i<27;i++)
		 if(b[i]>m)
			 m=b[i];
		 n=0;
	 for(i=0;i<27;i++)
		 if(b[i]==m)
		 {
		   d[n]=i;
		   n=n+1;
		 }
         for(i=0;i<n;i++)
		 {
			 x[i]=d[i]+65;
		 }
		 k=c[0];
		 for(i=0;i<27;i++)
		 if(c[i]>k)
			 k=c[i];
		 if(k>m)
		 {
		 n=0;
	        for(i=0;i<27;i++)
		 if(c[i]==k)
		 {
		   d[n]=i;
		   n=n+1;
		 }
         if(n>0)
		 {
		 for(i=0;i<n;i++)
		 {
			printf("%c",d[i]+97);
			 x[i]=d[i]+97;
		 }
		 }
		 else
			 printf("%c",d[0]+97);
		 printf(" %d\n",k);
		 }
		 else if(m>k)
		 {
		    n=0;
	 for(i=0;i<27;i++)
		 if(b[i]==m)
		 {
		   d[n]=i;
		   n=n+1;
		 }
		 if(n>0)
         for(i=0;i<n;i++)
		 {
			 printf("%c",d[i]+65);
			 x[i]=d[i]+65;
		 }
		 else
             printf("%c",d[0]+65);
		 printf(" %d\n",m);
		 }


		 else
		 {
		  /* n=0;
	        for(i=0;i<27;i++)
		 if(c[i]==k)
		 {
		   d[n]=i;
		   n=n+1;
		 }
         if(n>0)
		 {
		 for(i=0;i<n;i++)
		 {
			printf("%c",d[i]+97);
			 x[i]=d[i]+97;
		 }
		 }
		 else
			 printf("%c",d[0]+97);*/
          n=0;
	 for(i=0;i<27;i++)
		 if(b[i]==m)
		 {
		   d[n]=i;
		   n=n+1;
		 }
		 if(n>0)
         for(i=0;i<n;i++)
		 {
			 printf("%c",d[i]+65);
			 x[i]=d[i]+65;
		 }
		 else
             printf("%c",d[0]+65);

		 n=0;
	        for(i=0;i<27;i++)
		 if(c[i]==k)
		 {
		   d[n]=i;
		   n=n+1;
		 }
         if(n>0)
		 {
		 for(i=0;i<n;i++)
		 {
			printf("%c",d[i]+97);
			 x[i]=d[i]+97;
		 }
		 }
		 else
			 printf("%c",d[0]+97);
         printf(" %d\n",k);
		 }

     for(i=0;i<10000;i++)
		 b[i]=0;
	  for(i=0;i<10000;i++)
		 c[i]=0;
	   for(i=0;i<1000;i++)
		 d[i]=0;
	 
	}

return 0;
}
