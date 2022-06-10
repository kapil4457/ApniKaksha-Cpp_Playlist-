#include <iostream>
using namespace std;

int factorial(int n)
{
    int temp = n;
    int ans = 1;
    for (int i = 1; i <= temp; i++)
    {

        ans = ans * i;
    }

    return ans;
}

int main()
{

    int ans = factorial(3);
    cout << ans;

    return 0;
}