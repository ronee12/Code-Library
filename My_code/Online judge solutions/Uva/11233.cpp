#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,t,m,n,l;
	char a[101][101],b[101][101];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%s %s",a[i],b[i]);
    for(i=0;i<n;i++)
	{
		char s[101]={0};
		scanf("%s",s);
		l=strlen(s);
		t=0;
		k=0;
		for(j=0;j<m;j++)
			if(strcmp(s,a[j])==0)
			{
			  k=j;
			  t=1;
			  break;
			}
			if(t==1)
				printf("%s\n",b[k]);
			else if(s[l-1]=='y')
			{
				if((s[l-2]=='a'||s[l-2]=='e'||s[l-2]=='i'||s[l-2]=='o'||s[l-2]=='u'))
                   printf("%ss\n",s);
				else
				{
				s[l-1]=NULL;
				printf("%sies\n",s);
				}
			  
			}
			else if(s[l-1]=='o'||s[l-1]=='s'||s[l-1]=='x'||(s[l-1]=='h'&&s[l-2]=='c')||(s[l-1]=='h'&&s[l-2]=='s'))
			      printf("%ses\n",s);
			else
				printf("%ss\n",s);
			
	}
return 0;
}