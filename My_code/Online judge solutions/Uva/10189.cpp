#include<stdio.h>
int main()
{
	int m,b,i,j,t=1;
	char a[200][200]={0};
	while(scanf("%d%d",&m,&b)!=EOF)
	{
		if(m==0||b==0)
			break;
	for(i=0;i<m;i++)
       scanf("%s",a[i]);
    for(j=0;j<m;j++)
		for(i=0;i<b;i++)
			if(a[j][i]=='*')
			{
				if(a[j][i-1]!='*')
			      a[j][i-1]=a[j][i-1]+1;
				if(a[j][i+1]!='*')
				  a[j][i+1]=a[j][i+1]+1;
				if(a[j-1][i]!='*')
				  a[j-1][i]=a[j-1][i]+1;
				if(a[j-1][i+1]!='*')
				  a[j-1][i+1]=a[j-1][i+1]+1;
				if(a[j-1][i-1]!='*')
				  a[j-1][i-1]=a[j-1][i-1]+1;
				if(a[j+1][i]!='*')
				  a[j+1][i]=a[j+1][i]+1;
				if(a[j+1][i+1]!='*')
				  a[j+1][i+1]=a[j+1][i+1]+1;
				if(a[j+1][i-1]!='*')
				  a[j+1][i-1]=a[j+1][i-1]+1;

			}
			if(t>1)
            	printf("\n");
			printf("Field #%d:\n",t);
			t=t+1;
			for(j=0;j<m;j++)
			{
		        for(i=0;i<b;i++)
					if(a[j][i]=='*')
						printf("*");
					else if(a[j][i]=='.')
						printf("0");
					else
                        printf("%c",a[j][i]+2);
					printf("\n");
			}
	}
	return 0;
}