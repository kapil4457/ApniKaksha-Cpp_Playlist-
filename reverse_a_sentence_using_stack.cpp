#include <bits/stdc++.h>
using namespace std;

void revString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{

    string st = "Hey, how are you?";
    revString(st);
    return 0;
}