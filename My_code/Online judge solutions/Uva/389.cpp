#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[1000]={0};
	int b,c,l,x[1000]={0},i,s,m,j,y[1000]={0},k,kk;
	while(scanf("%s",a)!=EOF)
	{
		scanf("%d%d",&b,&c);
		s=0;
		l=strlen(a);
		int z=0;
		for(i=0;i<l;i++)
		{
		   if(a[i]>=48 && 57>=a[i])
                x[i]=a[i]-48;
		   else
			   x[i]=a[i]-55;
		   if(a[i]=='0')
			   z++;
		}
       m=l;
	   if(l==z)
		   printf("      0\n");
	  else if(c==10)
	  {
	     for(i=0;i<l;i++)
		 {
			s=s+x[i]*pow(b,m-1);
				 m=m-1;
		 }
		 kk=s;
		 int di=0;
		 while(s!=0)
		 {
			 s=s/10;
			 di=di+1;
		 }
		 if(di>7)
			 printf("  ERROR\n");
		 else
		    printf("%7d\n",kk);
	  }
	  else if(b==10)
	  {
		  for(j=0;j<l;j++)
			  s=s*10+x[j];
            k=0;
		  while(s!=0)
		  {
		    y[k]=s%c;
			s=s/c;
			k=k+1;
		  }
		  if(k>7)
               printf("  ERROR\n");
		  else
		  {
			  if(k==6)
				  printf(" ");
			  else if(k==5)
				  printf("  ");
			  else if(k==4)
				  printf("   ");
				  else if(k==3)
				  printf("    ");
				   else if(k==2)
				  printf("     ");
				   else if(k==1)
				  printf("      ");
		    for(i=k-1;i>=0;i--)
			{
			  if(y[i]<10)
			     printf("%d",y[i]);
			  else if(y[i]==10)
				  printf("A");
			  else if(y[i]==11)
				  printf("B");
			  else if(y[i]==12)
				  printf("C");
			  else if(y[i]==13)
				  printf("D");
			  else if(y[i]==14)
				  printf("E");
			  else if(y[i]==15)
				  printf("F");
			}
		printf("\n");
		  }
	  }
	  else
	  {
	  for(i=0;i<l;i++)
		 {
			s=s+x[i]*pow(b,m-1);
				 m=m-1;
		 }
		  k=0;
		  while(s!=0)
		  {
		    y[k]=s%c;
			s=s/c;
			k=k+1;
		  }
		  if(k>7)
			  printf("  ERROR\n");
		  else
		  {
			  if(k==6)
				  printf(" ");
			  else if(k==5)
				  printf("  ");
			  else if(k==4)
				  printf("   ");
				  else if(k==3)
				  printf("    ");
				   else if(k==2)
				  printf("     ");
				   else if(k==1)
				  printf("      ");
		  for(i=k-1;i>=0;i--)
		  {
			  if(y[i]<10)
			     printf("%d",y[i]);
			  else if(y[i]==10)
				  printf("A");
			  else if(y[i]==11)
				  printf("B");
			  else if(y[i]==12)
				  printf("C");
			  else if(y[i]==13)
				  printf("D");
			  else if(y[i]==14)
				  printf("E");
			  else if(y[i]==15)
				  printf("F");
		  }
		printf("\n");
		  }
	  }
	  strcpy(a,"");
	}
return 0;
}