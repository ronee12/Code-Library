#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int i,n,m,b,g,h,temp,l1,l2,l3,y;
    while(scanf("%d",&n)!=EOF)
    {
        temp=n*n/4;
        l1=temp+1;
        l2=2*temp+1;
        l3=3*temp+1;
    int square[100][100]={0},j=1,k=n/4+1,l=1;
    y=n/2;
    for(i=1;i<=n/2*n/2;i++)
    {
        m=j;
        b=k;
        square[j][k]=l;
        g=j+y;
        h=k+y;
        square[g][h]=l1;
        square[g-y][h]=l2;
        square[g][h-y]=l3;
        if(j==1)
        j=n/2;
        else
        j=j-1;
        if(k==n/2)
        k=1;
        else
        k++;
        if(square[j][k]>0)
        {
          j=m+1;
          k=b;
        }
        l++;
        l1++;
        l2++;
        l3++;
    }


        int val=y+1;
for(i=1;i<=n/2;i++)
{
    for(j=n-(y/2-1)+1;j<=n;j++)
    {
        temp=square[i][j];
        square[i][j]=square[val][j];
        square[val][j]=temp;
    }
    val++;
}
b=y/2;
val=y+1;
for(i=1;i<=y;i++)
{
    if(i==y/2+1)
    {
        k=2;
        m=b+1;
    }
    else
    {
    m=b;
    k=1;
    }
    for(j=k;j<=m;j++)
    {
        temp=square[i][j];
        square[i][j]=square[val][j];
        square[val][j]=temp;
    }
    val++;
   }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%4d",square[i][j]);
        printf("\n\n");
    }
    }
    return 0;
}
