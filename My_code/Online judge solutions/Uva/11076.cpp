#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
unsigned int cnum;
char word[1000];
int value[127],len;
struct cmp {
  bool operator()(int x, int y) {
    return value[x] < value[y];
  }
};
int main(void){

    for(len = '1'; len < '9'+1; len++)
    {
        value[len] = 2*(len-'1');
    }
 int m,n;
    while(scanf("%d",&n)!=EOF)
    {
        unsigned long res=0;
        if(!n) break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            word[i]=(m+48);
        }
        len = strlen(word);
        sort(word,word+len,cmp());
        do{
        //puts(word);
            long long num;
            num=atoi(word);
            res+=num;
          //  printf("%lld ",num);
        }
        while(next_permutation(word,word+len,cmp()));
        printf("%u\n",res);
    }
    return 0;
}
