#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
char store[300][51]={0};
int k=0,p,k1=0,stn[300];
float x,x1,q;
void permute(char *str, const int strt, const int len) 
{
 int i = strt;
	 int j;
	char temp;
	for ( i = strt; i < len-1; ++i )
	{
		for ( j = i+1; j < len; ++j )
		{
			temp = str[i], str[i] = str[j], str[j] = temp;

			permute(str, i+1, len);

			temp = str[i], str[i] = str[j], str[j] = temp;
		}
	}
	x=0;
	for(i=0;i<5;i++)
		x=x*10+str[i]-48;
	x1=0;
	for(i=5;i<10;i++)
	    	x1=x1*10+str[i]-48;
	if(x>=x1)
	{
		p=int(x/x1);
		q=float(x/x1);
		if(p==q&& p>=2&&p<=79)
		{
            stn[k1]=p;
			strcpy(store[k1],str);
			k1++;
		}
	}
	k++;

}

int main()
 {
	
    
	
	 int x;
		k=0;
		k1=0;
	long int i,l;
	char a[15]={0},temp[100]={0};
	char str[100]={0};
	a[0]='0';
    a[1]='1';
	a[2]='2';
	a[3]='3';
	a[4]='4';
	a[5]='5';
	a[6]='6';
	a[7]='7';
	a[8]='8';
	a[9]='9';
	l=10;
	strcpy(str,a);
 long int j,k2=0;
permute(str, 0, l);
      while(scanf("%d",&x)!=EOF)
	  {
		  if(x<=0)
			  break;
		 if(k2>0)
			    printf("\n");
		  k2++;
		  j=0;
		  int s=0;
		  char s_a[100][100]={0},s_b[100][100]={0},temp[100]={0};
	    for(i=0;i<=281;i++)
			if(stn[i]==x)
			{
					for(s=0;s<5;s++)
						s_a[j][s]=store[i][s];
                  for(s=5;s<10;s++)
					  s_b[j][s-5]=store[i][s];
                  j++;
			}
			for(i=0;i<j-1;i++)
				for(s=0;s<j-1;s++)
                      if(strcmp(s_b[s],s_b[s+1])>0)
					  {
					     strcpy(temp,s_b[s]);
                         strcpy(s_b[s],s_b[s+1]);
						 strcpy(s_b[s+1],temp);

						 strcpy(temp,s_a[s]);
                         strcpy(s_a[s],s_a[s+1]);
						 strcpy(s_a[s+1],temp);

					  }
            for(i=0;i<j;i++)
				printf("%s / %s = %d\n",s_a[i],s_b[i],x);
       if(j==0)
		   printf("There are no solutions for %d.\n",x);
	  
	  }
      
return 0;
}