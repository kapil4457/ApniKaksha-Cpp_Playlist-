#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n; i > 0; i++)
    {
        output[--count[arr[i]]] = arr[i];
    }
}
int main()
{

    return 0;
}