#include<stdio.h>
#include<string.h>
int main()
{
	int l,m;
	char a[100],c[100];
while(gets(a))
{
	gets(c);
		l=strlen(a);
	m=strlen(c);
			long x[3]={0},i,j,q,ans=0,r,n,ans1=0,k,r1;
	float ratio1,ratio2;
	for(j=0;j<2;j++)
	{
		int b[100]={0};
	for(i=0;i<l;i++)
	{
	  if(a[i]=='a' || a[i]=='A')
		  b[i]=1;
	  else if(a[i]=='b' || a[i]=='B')
		  b[i]=2;
	  else if(a[i]=='c' || a[i]=='C')
		  b[i]=3;
	  else if(a[i]=='d' || a[i]=='D')
		  b[i]=4;
	  else if(a[i]=='e' || a[i]=='E')
		  b[i]=5;
	  else if(a[i]=='f' || a[i]=='F')
		  b[i]=6;
	  else if(a[i]=='g' || a[i]=='G')
		  b[i]=7;
	  else if(a[i]=='h' || a[i]=='H')
		  b[i]=8;
	  else if(a[i]=='i' || a[i]=='I')
		  b[i]=9;
	  else if(a[i]=='j' || a[i]=='J')
		  b[i]=10;
	  else if(a[i]=='k' || a[i]=='K')
		  b[i]=11;
	  else if(a[i]=='l' || a[i]=='L')
		  b[i]=12;
	  else if(a[i]=='m' || a[i]=='M')
		  b[i]=13;
	  else if(a[i]=='n' || a[i]=='N')
		  b[i]=14;
	  else if(a[i]=='o' || a[i]=='O')
		  b[i]=15;
	  else if(a[i]=='p' || a[i]=='P')
		  b[i]=16;
	  else if(a[i]=='q' || a[i]=='Q')
		  b[i]=17;
	  else if(a[i]=='r' || a[i]=='R')
		  b[i]=18;
	  else if(a[i]=='s' || a[i]=='S')
		  b[i]=19;
	  else if(a[i]=='t' || a[i]=='T')
		  b[i]=20;
	  else if(a[i]=='u' || a[i]=='U')
		  b[i]=21;
	  else if(a[i]=='v' || a[i]=='V')
		  b[i]=22;
	  else if(a[i]=='w' || a[i]=='W')
		  b[i]=23;
	  else if(a[i]=='x' || a[i]=='X')
		  b[i]=24;
	  else if(a[i]=='y' || a[i]=='Y')
		  b[i]=25;
	  else if(a[i]=='z' || a[i]=='Z')
		  b[i]=26;
	  x[j]=x[j]+b[i];

	}
	for(q=0;q<m;q++)
		a[q]=c[q];
	l=m;
	b[100]=0;
	}
	while(x[0]>=10)
	{
		ans=0;
		n=x[0];
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	ans=ans+r;
	}
     x[0]=ans;
	}
   	while(x[1]>=10)
	{
			ans1=0;
		k=x[1];
	while(k!=0)
	{
	r1=k%10;
	k=k/10;
	ans1=ans1+r1;
	}
     x[1]=ans1;
	}
	    if(x[0]>x[1])
	   {
		ratio1=(float)(x[1]*100)/x[0];
	    printf("%.2f %c\n",ratio1,37);
	   }
    	else
		{
		 ratio2=(float)(x[0]*100)/x[1];
         printf("%.2f %c\n",ratio2,37);
		}
	}
	return 0;
}