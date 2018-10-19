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
int main()
{
	int cc,ss,mm,hh,c,s,m;
	double rs;
	long ans;
	while(scanf("%2d%2d%2d%2d",&hh,&mm,&ss,&cc)==4)
	{
	  rs=(((((((cc/100.0)+ss)/60.0)+mm)/60.0)+hh)*10000000)/24;
	  ans=rs;
	  c=ans%100;
	  ans=ans/100;
	  s=ans%100;
	  ans=ans/100;
	  m=ans%100;
	  ans=ans/100;
		 printf("%d%02d%02d%02d\n",ans,m,s,c);
	}
 return 0;
}

	 /* if(ans<=9)
		  printf("000000%ld\n",(ans));
	  else if(ans<=99)
          printf("00000%ld\n",(ans));
	  else if(ans<=999)
		  printf("0000%ld\n",(ans));
	  else if(ans<=9999)
		  printf("000%ld\n",(ans));
	  else if(ans<=99999)
		  printf("00%ld\n",(ans));
	  else if(ans<=999999)
		  printf("0%ld\n",(ans));
	  else*/