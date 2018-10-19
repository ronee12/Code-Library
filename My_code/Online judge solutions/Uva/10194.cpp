#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int test,num;
	scanf("%d",&test);
	getchar();
	for(num=0;num<test;num++)
	{
		int i,l1,n,pp,p[1000]={0},ii,d[1000]={0},f[1000]={0},e[1000]={0},h[1000]={0},I[1000]={0},c[1000]={0},t1,t2,g[1000]={0};
	char tournament_name[1001]={0},team_name[35][35]={0},gt1,gt2,k,l,j;
	gets(tournament_name);
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(team_name[i]);
	/*	l1=strlen(team_name[i]);
		for(j=0;j<l1;j++)
			if(islower(team_name[i][j]))
                 team_name[i][j]=team_name[i][j]-32;*/
	}
	scanf("%d",&pp);
	getchar();
	for(ii=0;ii<pp;ii++)
	{
         char team1[500]={0},team2[500]={0},description[2000]={0};
		 	gets(description);
	  l=strlen(description);
	   /*	for(j=0;j<l;j++)
			if(islower(description[j]))
                 description[j]=description[j]-32;*/
	  k=0;
	  j=0;
	    while(description[j]!='#')
		{
			team1[k++]=description[j];
			j++;
		}
		j++;
		gt1=0;
		while(description[j]!='@')
		{
            gt1=gt1*10+(description[j]-48);
			j++;
		}
        j++;
		gt2=0;
        while(description[j]!='#')
		{
            gt2=gt2*10+(description[j]-48);
			j++;
		}
		k=0;
		j++;
		while(j<l)
		{
		  team2[k++]=description[j];
		  j++;
		}
      for(i=0;i<n;i++)
	  {
		  if(strcmp(team1,team_name[i])==0)
			  t1=i;
          if(strcmp(team2,team_name[i])==0)
			  t2=i;
	  }
	  if(gt1>gt2)
	  {
		  d[t1]=d[t1]+1;
		  f[t2]=f[t2]+1;
          p[t1]=p[t1]+3;
	  }
	  else if(gt2>gt1)
	  {
		  d[t2]=d[t2]+1;
		  f[t1]=f[t1]+1;
		  p[t2]=p[t2]+3;
	  }
	  else
	  {
	    e[t1]=e[t1]+1;
        e[t2]=e[t2]+1;
        p[t1]=p[t1]+1;
		p[t2]=p[t2]+1;
	  }
      h[t1]=h[t1]+gt1;
	  h[t2]=h[t2]+gt2;
	  I[t1]=I[t1]+gt2;
	  I[t2]=I[t2]+gt1;

	  c[t1]=c[t1]+1;
	  c[t2]=c[t2]+1;
	}
	int temp,kk;

	char temps[102]={0};
	for(i=0;i<n;i++)
	  g[i]=h[i]-I[i];
	for(i=0;i<n-1;i++)
			for(j=0;j<n-1;j++)
				if(p[j]>p[j+1])
				{
				  temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;

				}
				else if(p[j]==p[j+1])
				  if(d[j]>d[j+1])
				  {
				     temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;
				  }
				  else if(d[j]==d[j+1])
					  if(g[j]>g[j+1])
					  {
					    temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;
					  }
					  else if(g[j]==g[j+1])
						  if(h[j]>h[j+1])
						  {
						    temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;
						  }
			  else if(h[j]==h[j+1])
				 if(c[j]<c[j+1])
				  {
				  temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;
				}
				 else if(c[j]==c[j+1])
					 if(strcmp(team_name[j],team_name[j+1])<0)////<
					 {
					   temp=p[j];
				  p[j]=p[j+1];
				  p[j+1]=temp;

				  strcpy(temps,team_name[j]);
				  strcpy(team_name[j],team_name[j+1]);
                  strcpy(team_name[j+1],temps);

				  temp=d[j];
				  d[j]=d[j+1];
				  d[j+1]=temp;

				  temp=h[j];
				  h[j]=h[j+1];
				  h[j+1]=temp;

				  temp=c[j];
				  c[j]=c[j+1];
				  c[j+1]=temp;
                  
                  temp=g[j];
				  g[j]=g[j+1];
				  g[j+1]=temp;

                  temp=e[j];
				  e[j]=e[j+1];
				  e[j+1]=temp;

				  temp=f[j];
				  f[j]=f[j+1];
				  f[j+1]=temp;

				  temp=I[j];
				  I[j]=I[j+1];
				  I[j+1]=temp;
					 }
					 if(num>0)
						 printf("\n");
				printf("%s\n",tournament_name);
		for(i=n-1,kk=1;i>=0;i--,kk++)
		{
		  printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",kk,team_name[i],p[i],c[i],d[i],e[i],f[i],g[i],h[i],I[i]);
		}
		}

return 0;
}