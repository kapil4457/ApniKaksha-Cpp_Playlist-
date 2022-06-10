// #include <bits/stdc++.h>
#include <math.h>
#include <cmath>
#include <iostream>
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
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIdx = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minIdx = min(minIdx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minIdx == INT32_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIdx + 1 << endl;
    }
    return 0;
}