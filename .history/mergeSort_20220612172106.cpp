#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
    }
}
int main()
{
    int arr[4] = {1, 3, 4, 2};

    cout << arr[1];
    return 0;
}