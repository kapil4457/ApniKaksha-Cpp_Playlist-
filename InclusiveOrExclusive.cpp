#include <bits/stdc++.h>
using namespace std;

// Q1. How many numbers between 1 and 1000 are divisible by 5 or 7?
int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

// Q2.  Euclid Algorithm to find HCF/GCD

int GCD(int a, int b)
{

    int rem = 0;

    while (a % b != 0)
    {
        if (a > b)
        {
            a = a;
            b = b;
        }
        else
        {
            int temp = a;
            a = b;
            b = temp;
        }
        rem = a % b;
        a = b;
        b = rem;
    }
    return b;
}
int main()

{
    // For Ans 1.
    // int n, a, b;
    // cin >> n >> a >> b;
    // cout << divisible(n, a, b) << endl;

    // For Ans 2.
    int a = 24;
    int b = 42;
    cout << GCD(a, b);

    return 0;
}