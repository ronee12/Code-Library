#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    for(int i=3;i<=999;i++)
        if(i%3==0||i%5==0)
        sum+=i;
    cout<<sum;
    return 0;
}
