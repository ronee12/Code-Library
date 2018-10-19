#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

	long i,a[10],s[10],min,k;
	while(scanf("%ld",&a[0])!=EOF)
	{
			char s1[10][10]={0};
		k=0;
	for(i=1;i<9;i++)
		scanf("%ld",&a[i]);
	s[1]=a[1]+a[2]+a[3]+a[5]+a[7]+a[6];
	strcpy(s1[1],"BGC");
	s[0]=a[4]+a[6]+a[8]+a[1]+a[2]+a[3];
    strcpy(s1[0],"BCG");
    s[4]=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
	strcpy(s1[4],"GBC");
	s[5]=a[0]+a[4]+a[7]+a[8]+a[2]+a[3];
	strcpy(s1[5],"GCB");
	s[2]=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
	strcpy(s1[2],"CBG");
	s[3]=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
	strcpy(s1[3],"CGB");
	min=s[0];
    for(i=0;i<=5;i++)
		if(min>s[i])
		{
			min=s[i];
			k=i;
		}	
		printf("%s %ld\n",s1[k],min);
		}
return 0;
}