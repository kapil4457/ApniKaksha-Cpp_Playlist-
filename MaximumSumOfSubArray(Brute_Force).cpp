#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        for (int j = i; j < n; j++)
        {
            int tempSum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                tempSum += arr[k];
            }
            if (sum < tempSum)
            {
                sum = tempSum;
            }
            cout << endl;
            tempSum = 0;
        }
    }
    cout << "Sum : " << sum;
    return 0;
}