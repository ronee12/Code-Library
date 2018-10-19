#include<stdio.h>
#include<math.h>
int main()
{
	long int i,count=0,x,m=0,tp,mod,sd,x0,ans=0,mot,c,n,test,ts,a[100000];
	scanf("%ld",&ts);
	for(test=0;test<ts;test++)
	{
               m=0;
			   ans=0;
			   count=0;
			   mot=0;
                      scanf("%ld%ld",&x0,&x);
                         for (i=x0;i<=x;i++) 
						 {
                                n=i;
							 int ii;
                                   if (n ==1)
									   c=0;
                               else if (n == 2) 
                                     c=1;
							   else if(n==5)
								   c=1;
							   else if(n==7)
								   c=1;
                               else if (n%2 == 0)
								     c=0;
                               else
								   for (ii=3; ii*ii<=n; ii=ii+2)
                                           if (n%ii == 0)
										   {
											   c=0;
										        break;
										   }
										   else
											   c=1;
                               if(c==1)
							   {
                                  a[m]=i;

								   if(a[m]>=10)
								   {
	                                sd=0;
                                    tp=a[m];
	                                      while(tp!=0)
										  {
	                                            mod=tp%10;
	                                             tp=tp/10;
	                                            sd=sd+mod;
										  }
	                                      n=sd;
							 int ii;
                                   if (n ==1)
									   c=0;
                               else if (n == 2) 
                                     c=1;
							   else if(n==5)
								   c=1;
							   else if(n==7)
								   c=1;
                               else if (n%2 == 0)
								     c=0;
                               else
								   for (ii=3; ii*ii<=n; ii=ii+2)
                                           if (n%ii == 0)
										   {
											   c=0;
										        break;
										   }
										   else
											   c=1;
                             if(c==1)
                               mot=mot+1;
								   }
				                m=m+1;
							   }
						 }
						printf("%ld\n",mot);
	}
return 0;
}
