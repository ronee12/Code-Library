#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[100]={0};
	long int b,c,l,x[100]={0},i,m,j,y[100]={0},k,cc;
	double s;
	long ss;
	while(scanf("%ld%ld",&b,&c)!=EOF)
	{

		scanf("%s",a);
		s=0;
		cc=0;
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
		if(z==l)
			printf("%s base %ld = 0 base %ld\n",a,b,c);
		else
		{
		for(i=0;i<l;i++)
		{
		  if(x[i]>=b)
			  cc=1;
		}
		if(cc==1)
			printf("%s is an illegal base %ld number\n",a,b);
        else
		{
       m=l; 
	   printf("%s base %ld = ",a,b);
	  if(c==10)
	  {
	     for(i=0;i<l;i++)
		 {
			s=s+x[i]*pow(b,m-1);
				 m=m-1;
		 }
		    printf("%.lf",s);
	  }
	  else if(b==10)
	  {
		  ss=s;
		  for(j=0;j<l;j++)
			  ss=ss*10+x[j];
            k=0;
		  while(ss!=0)
		  {
		    y[k]=ss%c;
			ss=ss/c;
			k=k+1;
		  }
		    for(i=k-1;i>=0;i--)
			{
			  if(y[i]<10)
			     printf("%ld",y[i]);
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
	  }
	  else
	  {
	  for(i=0;i<l;i++)
		 {
			s=s+x[i]*pow(b,m-1);
				 m=m-1;
		 }
	  ss=s;
		  k=0;
		  while(ss!=0)
		  {
		    y[k]=ss%c;
			ss=ss/c;
			k=k+1;
		  }
		  for(i=k-1;i>=0;i--)
		  {
			  if(y[i]<10)
			     printf("%ld",y[i]);
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
		  }
	  printf(" base %ld\n",c);
		}
		}
	}
return 0;
}