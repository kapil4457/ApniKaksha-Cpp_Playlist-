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
    cout << "via Iterator : " << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // Automatic detection
    cout << "Via Auto : " << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    // Pop function
    v.pop_back();

    // Sort
    v.sort(v.begin(), v.end());

    return 0;
}