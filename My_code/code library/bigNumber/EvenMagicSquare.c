#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,n,m,b,y,t,v,k,top,j,temp;
    while( scanf("%d",&n)!=EOF)
    {
    int square[200][200]={0},l=1;
    y=n/2;
    for(t=1;t<=4;t++)
    {
        if(t==1)
        {
            j=1;
            k=n/4+1;
            top=1;
            v=n/2;
        }
        else if(t==2)
        {
            j=n/2+1;
            k=n/2+n/4+1;
            top=n/2+1;
            v=n;
        }
        else if(t==3)
        {
            j=1;
            k=n/2+n/4+1;
            top=1;
            v=n/2;
    for(i=1;i<=y*y;i++)
       {
        m=j;
        b=k;
        square[j][k]=l;
        if(j==top)
        j=v;
        else
        j=j-1;
        if(k==n)
        k=n/2+1;
        else
        k++;
        if(square[j][k]>0)
        {
          j=m+1;
          k=b;
        }
        l++;
    }
        }
        else
        {
            j=n/2+1;
            k=n/4+1;
            top=n/2+1;
            v=n;
    for(i=1;i<=y*y;i++)
       {
        m=j;
        b=k;
        square[j][k]=l;
        if(j==top)
        j=v;
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
       }
        }
    if(t==1||t==2)
    {
       for(i=1;i<=y*y;i++)
       {
        m=j;
        b=k;
        square[j][k]=l;
        if(j==top)
        j=v;
        else
        j=j-1;
        if(k==v)
        k=top;
        else
        k++;
        if(square[j][k]>0)
        {
          j=m+1;
          k=b;
        }
        l++;
       }
    }
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
        printf("%5d",square[i][j]);
        printf("\n\n");
    }
    }
    return 0;
}
