#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
using namespace std;
int c[100050][100];//[1100];
#define N 999999
int modul(int n,int m){
    while(n < 0)
   n += m;
   int tmp=n%m;
   //assert(tmp>=0 && tmp<m);
    return tmp;

}
int main(){
   //freopen("agrinet.in","r",stdin);
   int count;
   cin>>count;
   int n,k,a,b,i;
   int tmp;
   while(count--){
      cin>>n>>k;
      for( i=0;i<n;i++)
         for(int j=0;j<k;j++)
            c[i][j]=0;
      cin>>a>>b;

      tmp=modul(a+b,k);
      c[1][tmp]=1;

      tmp=modul(a-b,k);
      c[1][tmp]=1;

      for(int i=2;i<n;i++){
         cin>>a;
         for(int j=0;j<k;j++){
            if (c[i-1][j]==1){

               tmp=modul(j+b,k);
               c[i][tmp]=1;

               tmp=modul(j-b,k);
               c[i][tmp]=1;
            }
         }
      }
      if (c[n-1][0]==1) cout<<"Divisible"<<endl;
      else cout<<"Not divisible"<<endl;
   }
   return 0;
}