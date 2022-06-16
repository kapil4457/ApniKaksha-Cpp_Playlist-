#include <bits/stdc++.h>
using namespace std;
//(a+b))
bool redundantParenthesis(string str)
{
    // cout << str.length() << endl;
    stack<char> s;
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            s.push(str[i]);
            i++;
            continue;
        }
        if (str[i] == ']')
        {
            if (s.empty())
            {
                return true;
            }
            if (s.top() != '[')
            {
                if (s.top() == '(' || s.top() == '{')
                {

                    return true;
                }
                else
                {
                    i++;
                    continue;
                }
            }
            else
            {
                s.pop();
                i++;
                continue;
            }
        }
        if (str[i] == '}')
        {
            if (s.empty())
            {
                return true;
            }
            if (s.top() != '{')
            {
                if (s.top() == '(' || s.top() == '[')
                {

                    return true;
                }
                else
                {
                    i++;
                    continue;
                }
            }
            else
            {
                s.pop();
                i++;
                continue;
            }
        }
        if (str[i] == ')')
        {
            if (s.empty())
            {
                return true;
            }
            if (s.top() != '(')
            {
                if (s.top() == '[' || s.top() == '{')
                {

                    return true;
                }
                else
                {
                    i++;
                    continue;
                }
            }
            else
            {
                s.pop();
                i++;
                continue;
            }
        }
        i++;
    }

    if (s.empty())
    {
        return false;
    }
    return true;
}
int main()
{

    string str = "((a+b)*{{a*b})";
    cout << redundantParenthesis(str);

    return 0;
}