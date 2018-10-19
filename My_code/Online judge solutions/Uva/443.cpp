#include<stdio.h>
#include<math.h>
char* end(int n)
{ 
if((n%100)/10==1)
return "th"; 
if(n%10==1)
return "st"; 
if(n%10==2)
return "nd"; 
if(n%10==3)
return  "rd"; 
return "th"; 
} 
int main()
{
	unsigned long hn[5844];
	unsigned long t[4];
	unsigned long s[4];
	unsigned long p,c,i,min;
     for(i=0;i<4;i++)
	 {
		 hn[i]=1;
		 s[i]=1;
	 }
	 hn[0]=1;
	 hn[1]=1;
	 c=2;
	 while(c<5844)
	 {
	   t[0]=hn[s[0]]*2;
	   t[1]=hn[s[1]]*3;
	   t[2]=hn[s[2]]*5;
	   t[3]=hn[s[3]]*7;
	   min=t[0];
	   p=0;
	   for(i=0;i<4;i++)
		   if(t[i]<min)
		   {
			   p=i;
			   min=t[i];
		   }
		   hn[c]=min;
		   if(hn[c]!=hn[c-1])
			   c++;
         s[p]++;
	 }
	 long nn;
	 while(scanf("%ld",&nn)!=EOF)
	 {
		 if(nn==0)
			 break;
	   printf("The %ld%s humble number is %ld.\n",nn,end(nn),hn[nn]);
	 }
return 0;
}







/*TIPS:

char* end(int n)
{ 
if((n%100)/10==1)
return "th"; 
if(n%10==1)
return "st"; 
if(n%10==2)
return "nd"; 
if(n%10==3)
return  "rd"; 
return "th"; 
} 

printf("The %d%s humble number is %d.\n",n,end(n),T[n]);*/