#include<stdio.h>
#include<string.h>
#define MAX 1000 
 
char x[MAX],y[MAX]; 
	int c[MAX][MAX],b[MAX][MAX]; 
int m,n;
 
int LCSlength() 
{ 
 
 int i,j;
 m=strlen(x);
 n=strlen(y);
  for (i=1;i<=m;i++) c[i][0]=0; 
  for (j=0;j<=n;j++) c[0][j]=0; 
 
  for (i=1;i<=m;i++) 
    for (j=1;j<=n;j++) { 
		
      if (x[i-1]==y[j-1]) { 
        c[i][j]=c[i-1][j-1]+1; 
        b[i][j]=1; /* from north west */ 
      } 
 
      else if (c[i-1][j]>=c[i][j-1]) { 
      c[i][j]=c[i-1][j]; 
       b[i][j]=2; /* from north */ 
      } 
      else { 
        c[i][j]=c[i][j-1]; 
        b[i][j]=3; /* from west */ 
		  }  
    } 
	/*for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}*/
	
  return c[m][n]; 
} 

int main()
{
	int t=1;
	while (1) 
	{ 
    gets(x); 
    if ((strcmp(x,"#")==0))
		break; /* press # to terminate */ 
    gets(y); 


    printf("Case #%d: you can visit at most %d cities.\n",t,LCSlength()); /* count length */
	t=t+1;
   
  } 
	return 0;
}