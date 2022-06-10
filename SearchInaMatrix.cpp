#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    //---------------- O(n) Complexity--------------------
    int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found == true)
    {
        cout << "Elemnt Found!!" << endl;
    }
    else
    {
        cout << "Element Not Found!!" << endl;
    }

    //-----------------O(n^2) Complexity--------------

    // int j;
    // int i;
    // for (i = 0; i < m; i++)
    // {
    //     if (i == m - 1)
    //     {
    //         for (j = 0; j < n; j++)
    //         {
    //             if (arr[j][i] == target)
    //             {
    //                 cout << "Elemnt Found!!" << endl;
    //                 break;
    //             }
    //         }
    //         if (arr[i][j - 1] != target)
    //         {

    //             cout << "Element not found!!";
    //         }
    //     }
    //     else
    //     {

    //         if (arr[0][i] < target && arr[0][i + 1] > target)
    //         {
    //             for (j = 0; j < n; j++)
    //             {
    //                 if (arr[j][i] == target)
    //                 {
    //                     cout << "Elemnt Found!!" << endl;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    // }
    return 0;
}