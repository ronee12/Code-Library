/*  # Accepted #
	# Run Time: 0.872 #
	# Date: 12.11.2010 #
	# Atiq_CSE_67 #
	# Comment: 
				this similar of 11876[ n+ nod(n)] problem.
				which is also solved by me.
	#
*/


#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<bitset>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;


bool is_prime(long n) 
{
	long i;

  if (n == 1) return false;        
  if (n == 2) return true;        
  if (n%2 == 0) return false;      
  for (i=3; i*i<=n; i+=2)  
    if (n%i == 0)              
      return false; 
  return true; 
} 

bool digitPrime(long n)
{
	long m,dp;
	if(is_prime(n))
	{
		m = n;
		dp =0;
		while(m)
		{
			dp += m%10;
			m /= 10;
		}
		if(is_prime(dp))
			return true;
	}
	return false;
}


int main()
{
	long n,a,b,i=2,indexA,indexB;
	long dPrimes[30123];
	long count=0,j=0;
	int ub,lb,mid;

	while(i<1000000)
	{
		if(digitPrime(i))
			dPrimes[j++] = i;
		i++;
	}


	scanf("%ld",&n);

	while(n--)
	{
		scanf("%ld %ld",&a,&b);

				if(a == b)
				{
					lb = 0;
					ub = 30122;
					mid = (lb+ub)/2;
					while(lb <= ub && a != dPrimes[mid])
					{
						if(a < dPrimes[mid])
							ub = mid -1;
						else if(a > dPrimes[mid])
							lb = mid + 1;
						mid = (lb+ub)/2;
					}
					if(a == dPrimes[mid])
					{
						printf("%ld\n",1);
						continue;
					}
					else
					{
						printf("%ld\n",0);
						continue;
					}
				}
				else
				{
					lb = 0;
					ub = 30122;

					while(lb <= ub)
					{
						mid = (lb + ub)/2;
						  if(a<dPrimes[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(a>dPrimes[mid])
                         {
                             lb = mid + 1;
                         }
						 else
						 {
							 indexA = mid;
							 break;
						 }
						 indexA = lb;
					 }

					 lb = 0;
					 ub = 30122;
                
					 while(lb <= ub)
					 {
						 mid = (lb + ub)/2;
                         if(b<dPrimes[mid])
                         {
                             ub = mid - 1;
                         }
                         else if(b > dPrimes[mid])
                         {
                             lb = mid + 1;
                         }
						 else 
						 {
							 indexB = mid;
							 break;
						 }
						 indexB = ub;
					}
				}  
				printf("%ld\n",(indexB-indexA)+1);
				
	}

	return 0;
}