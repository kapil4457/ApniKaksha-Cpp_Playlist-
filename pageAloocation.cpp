#include <bits/stdc++.h>
using namespace std;

bool isPossible(int A[], int N, int M, int mid)
{
    int pageSum = 0;
    int studentCount = 1;
    for (int i = 0; i < N; i++)
    {
        if (pageSum + A[i] <= mid)
        {
            pageSum += A[i];
        }
        else
        {
            studentCount++;
            if (studentCount > M || A[i] > mid)
            {
                return false;
            }
            pageSum = A[i];
        }
        // return true;
    }
    return true;
}

int findPages(int A[], int N, int M)
{
    // code here
    int s = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(A, N, M, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {12, 34, 67, 90};
    cout << findPages(arr, 4, 2);
    return 0;
}