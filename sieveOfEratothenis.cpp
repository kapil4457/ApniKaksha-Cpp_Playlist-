// Used to print all prime nubers in a given range

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)

{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void primeFactor(int n)
{
    int spf[n + 1] = {0};
    for (int i = 0; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
int main()
{
    // sieve(50);
    primeFactor(10);

    return 0;
}