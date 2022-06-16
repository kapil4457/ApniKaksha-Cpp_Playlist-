#include <bits/stdc++.h>
using namespace std;

void slidingWindow(int arr[], int size, int start)

{

    int end = start + 3;
    if (end > size)
    {
        return;
    }
    int max = arr[start];
    for (int i = start; i < end; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << " ";
    slidingWindow(arr, size, start + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int getArrayLength = sizeof(arr) / sizeof(int);

    cout << getArrayLength << endl;
    slidingWindow(arr, getArrayLength, 0);

    return 0;
}