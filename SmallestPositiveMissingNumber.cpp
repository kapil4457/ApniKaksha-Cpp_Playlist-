#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT32_MAX;
    sort(arr, arr + size);
    for (int i = 0; i < max; i++)
    {
        if (arr[i] < 0)
        {
            break;
        }
        if (arr[i] != i)
        {
            cout << "Missing Element : " << i << endl;
            break;
        }
    }

    return 0;
}