#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1]; // Temp arr
    int b[n2]; // Temp arr

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + 1];
    }
    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[4] = {1, 3, 4, 2};

    cout << arr[1];
    return 0;
}