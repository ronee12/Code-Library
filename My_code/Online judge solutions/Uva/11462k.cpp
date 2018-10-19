#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<long> v;
	vector<long>::iterator i;
	long a,n,j;
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0)
			break;
		
		for(j=0;j<n;j++)
		{
			scanf("%ld",&a);
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(i=v.begin();i<v.end()-1;i++)
			printf("%ld ",*i);
		printf("%ld",*i);
		printf("\n");
		v.erase(v.begin(),v.end());
	}
	return 0;
}