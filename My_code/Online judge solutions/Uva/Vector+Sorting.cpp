#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int a,n;
	while(scanf("%d",&n)!=EOF)
	{
			if(n==0)
			break;
		vector<int >::iterator i;
			vector<int > v;
	for(int  j=0;j<n;j++)
	{scanf("%d",&a);
	v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(i=v.begin();i!=v.end();i++)
		printf("%d ",*i);
	printf("\n");
	}
	return 0;
}