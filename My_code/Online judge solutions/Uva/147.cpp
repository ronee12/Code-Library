#include<stdio.h>
int main()
{
	long it,fl;
	while(scanf("%ld.%ld",&it,&fl)!=EOF)
	{
		if(it==0 && fl==0)
			break;
		long k,coin[11]={10000,5000,2000,1000,500,200,100,50,20,10,5},i,j,c,m[100000]={0};
 k=100*it+fl;
 m[0]=1;
 for(i=0;i<11;i++)
 {
 c=coin[i];
 for(j=c;j<=k;j++)
	 m[j]+=m[j-c];
 }
 double d=double(k/100.0);
 printf("%6.2lf%17ld\n",d,m[k]);
/*/ printf("%2ld.%2ld%12ld\n",it,fl,m[k]);*/
	}
return 0;
}
