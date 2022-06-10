#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Q1. Convert a given string to uppercase and lowercase
    string str = "rhvcgzfgavfha";
    // cout << 'a' - 'A' << endl;

    // //--------To upperCase---------
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout << str << endl;

    // //---To LowerCase----
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout << str << endl;

    // ------In-Built Function-------
    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout << str << endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout << str << endl;

    // Q2.Form the biggest number from the given string
    // string s = "4329876";
    // sort(s.begin(), s.end(), greater<int>());
    // cout << s << endl;

    // Q3.Find the character that occurs the maximum number of times
    string s = "hjgdsvinffbjksndvfqbh";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int max = freq[0];
    char ans = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ans = i + 'a';
        }
    }

    cout << ans << endl;
    cout << max << endl;
    return 0;
}