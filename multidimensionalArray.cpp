#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int arr[n][m];
    // Input the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // Searching in a multidiensional array
    bool flag = false;
    int x = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "Element Found" << endl;
    }
    else
    {

        cout << "Element not found" << endl;
    }

    return 0;
}