#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

//#define DEBUG 1

#if DEBUG
#define dump(fmt, x) fprintf(stderr, #x " = " fmt "\n", x)
#else
#define dump(fmt, x)
#endif

#define MAXINT ((1<<31) - 1)
#define MAXP (1<<16)

int primes[MAXP];
int nprimes = 0;

int main()
{
        bool comp[MAXP] = {0};
        for (int i = 2; i < MAXP; ++i)
                if (!comp[MAXP])
                {
                        primes[nprimes++] = i;
                        for (int j = i; j < MAXP; j += i)
                                comp[j] = true;
                }

        int m, n;
        while (scanf("%d %d", &m, &n) == 2)
        {
                if (m > n)
                        n ^= m ^= n ^= m;
                m >?= 2;
                dump("%d", m);
                dump("%d", n);
                int len = n - m;
                bool isprime[len+1];
                memset(isprime, 1, sizeof(isprime));
                for (int i = 0; i < nprimes; ++i)
                {
                        int pr = primes[i];
                        for (int j = (pr - m % pr) % pr; j <= len; j += pr)
                                if (pr < m + j)
                                        isprime[j] = false;
                }

                int min = MAXINT;
                int mina, minb;
                int max = 0;
                int maxa, maxb;
                int last = 0;
                if (m == 2 && n > 2)
                {
                        last = 1;
                        min = 1;
                        mina = 0;
                        minb = 1;
                        max = 1;
                        maxa = 0;
                        maxb = 1;
                }
                else
                        for (int k = 0; k <= len; ++k)
                                if (isprime[k])
                                {
                                        last = k;
                                        break;
                                }
                dump("%d", last);
                for (int k = last + 2; k <= len; k += 2)
                        if (isprime[k])
                        {
                                int d = k - last;
                                if (d < min)
                                {
                                        min = d;
                                        mina = last;
                                        minb = k;
                                }
                                if (d > max)
                                {
                                        max = d;
                                        maxa = last;
                                        maxb = k;
                                }
                                last = k;
                        }
                if (max == 0)
                        puts("There are no adjacent primes.");
                else
                        printf("%d,%d are closest, %d,%d are most distant.\n", mina + m, minb + m, maxa + m, maxb + m);
        }
        return 0;
}