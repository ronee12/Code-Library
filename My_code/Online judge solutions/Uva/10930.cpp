#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define max 10000000001
int main()
{ 

      int n,t=1,a;
    while(scanf("%d",&n)!=EOF)
	{
			int  c,i,j,k,p;
		 int *b;
		 b=(int*)malloc(max*sizeof(int));
		c=0;
		printf("Case #%d:",t);
		t++;
		p=0;
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",&a);
		 printf(" %d",a);
		  if(c==0||c==1)
		  {
               if(a<1)
				   c=1;
			
			   for(j=0;j<p;j++)
				   if(a==b[j]) 
				      c=1;
			 b[p]=a;
	
			 p++;
			 k=p;
			 for(j=0;j<k-1;j++,p++)
                   b[p]=b[j]+a;
			 
	//	printf("%ld\n",p);
		  }
	  }
//printf("%ld\n",p);
	  if(c==0)
	  printf("\nThis is an A-sequence.\n");
	  else
		  printf("\nThis is not an A-sequence.\n");
	}
return 0;
}
