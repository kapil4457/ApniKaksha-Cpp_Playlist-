#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    int temp = n;

    int ans = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        ans += pow(lastdigit, 3);
        n = n / 10;
    }

    if (ans == temp)
    {
        cout << "It is an armstrong number" << endl;
    }
    else
    {
        cout << "It is not an armstrong number" << endl;
    }

    return 0;
}