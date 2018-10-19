#include <stdio.h>
#include <math.h>

int main()
{
    long i,j,N;
	double X[10001]={0.0},Y[10001]={0.0},dist,d,p;
       while(scanf("%ld",&N)!=EOF)
	   {
        if(N==0) 
			break;
        dist = 999999999999999999;
        for(i=0 ; i<N ; i++)
        {
            scanf("%lf%lf",&X[i],&Y[i]);
            for(j=0 ; j<i ; j++)
            {
                d = ((X[i]-X[j])*(X[i]-X[j]))+(Y[i]-Y[j])*(Y[i]-Y[j]);
                if(dist>d)
                    dist = d;
                
            }
        }
             p=sqrt(dist);
			 if(p <10000.0 && fabs(p-10000.0)>1e-10)
			printf("%.4lf\n",p);
        else 
			printf("INFINITY\n");
    }
    return 0;
}