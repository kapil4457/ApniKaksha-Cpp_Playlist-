#include <iostream>
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
    int j;

    int mx = arr[0];
    int recordBreakingDays = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            if (arr[i] > arr[i + 1])
            {
                recordBreakingDays++;
            }
        }
    }
    cout << "Record Breaking days are : " << recordBreakingDays;
    return 0;
}