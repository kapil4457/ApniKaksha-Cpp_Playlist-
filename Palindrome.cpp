#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char word[n + 1];
    cin >> word;

    bool check = true;

    int start = 0;
    int end = n - 1;

    for (int i = 0; i < (end) / 2; i++)
    {
        if (word[start] == word[end])
        {
            start++;
            end--;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check == false)
    {
        cout << "It is not a palindrome" << endl;
    }
    else
    {
        cout << "It is a palindrome" << endl;
    }
    return 0;
}