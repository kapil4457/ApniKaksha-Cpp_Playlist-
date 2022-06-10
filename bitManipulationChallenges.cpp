#include <bits/stdc++.h>
using namespace std;

// Write a program to find whether the given number is a power of two
bool isPowerOfTwo(int n)
{
    return (n && !(n & n - 1));
}

// Write a program to count the number of ones in binary representation of a number
int numOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

// Write a program to write all possible subsets of the given set
void subsets(int arr[], int n)
{
    for (int i = 0; i < (i << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

// Write a program to find the number that apperars only once in the given array
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

// Write a program to find 2 unique ubers in an array where all numbers except two are present twice
int uniqueTwoNum(int arr[], int n)
{
}
int main()
{
    // cout << isPowerOfTwo(15) << endl;
    // cout << numOfOnes(19) << endl;
    int arr[] = {1, 2, 3, 4, 4, 5, 1, 5, 2};
    // subsets(arr, 4);
    cout << unique(arr, 9);

    return 0;
}