#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Size
    cout << "size : " << v.size() << endl;

    // Iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // Auto
    for (auto element : v)
    {
        cout << element << endl
    }
    return 0;
}