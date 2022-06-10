#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n^2)
bool PairSum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return true;
            }
        }
    }
    return false;
}

// Time Complexity : O(n)

bool PairSumFast(int arr[], int n)
{
    int size = sizeof(arr);
    int low = arr[0];
    int high = arr[size];
    while (low < high)
    {
        if (arr[low] + arr[high] == n)
        {
            return true;
        }
        if (arr[low] + arr[high] < n)
        {
            low++;
        }
        if (arr[low] + arr[high] > n)
        {
            high++;
        }
    }
    return false;
}
int main()
{

    return 0;
}