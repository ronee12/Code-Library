/**Bismillahir Rahmanir Rahim
   In the name of ALLAH, most gracious, most merciful */
#include<stdio.h>
int main()
{
    long n,eular,div,cnt,m,i;
    while(scanf("%ld",&n)!=EOF)
    {
        m=n;
        eular=n;
        div=1;
        if(n%2==0)
        {
            cnt=0;
            while(n%2==0)
            {
                cnt++;
                n/=2;
            }
            eular-=eular/2;
            div=div*(cnt+1);
        }
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                cnt=0;
                while(n%i==0)
                {
                    cnt++;
                    n/=i;
                }
            eular-=eular/i;
            div=div*(cnt+1);
            }
        }
        if(n>1)
        {
            eular-=eular/n;
            div=div*2;
        }
        printf("%ld\n",m-(eular+div)+1);
    }

return 0;
}
