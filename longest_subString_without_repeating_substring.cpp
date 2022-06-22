#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s)
{
    // pwwkew
    vector<int> dict(256, -1);

    int maxLen = 0, start = -1;

    for (int i = 0; i < s.length(); i++)

    {

        if (dict[s[i]] > start)
        {
            cout << s[i] << " ";
            cout << dict[s[i]] << " ";

            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }

    return maxLen;
}

int main()
{

    cout << longestSubstring("pwwekggthyllwkew");

    return 0;
}