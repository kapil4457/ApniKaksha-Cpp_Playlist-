#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    int target;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum == target)
        {
            cout << "Output : " << i << endl;
        }
        else
        {

            for (int j = i + 1; j < n; j++)
            {
                currSum += a[j];
                if (currSum == target)
                {
                    cout << "Output : " << i << "," << j << endl;
                }
            }
        }
        currSum = 0;
    }
    return 0;
}