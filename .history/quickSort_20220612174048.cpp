#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partititon(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{

    return 0;
}