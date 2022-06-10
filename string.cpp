#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str;
    // // cin>>str;  //-->Used to take single word input
    // getline(cin, str); // Used to take multi word input
    // cout << str << endl;
    // string str1(5, 'n');
    // cout << str1;

    //--------- Concatination-----------
    // string s1 = "fam";
    // string s2 = "ily";
    // cout << s1 + s2 << endl;
    // s1.append(s2);
    // cout << s1[2] << endl;
    // cout << s1 << endl;
    // s1.clear();
    // cout << s1;

    //------------Comparison------------
    // string s1 = "abd";
    // string s2 = "abd";
    // cout << s2.compare(s1) << endl;

    // cout << s1.empty() << endl;

    //--------Erase-------
    // string s1 = "nincompoop";
    // s1.erase(2, 2);
    // cout << s1;

    //----Find---------
    // string s1 = "nincompoop";
    // cout << s1.find("com") << endl;

    //-------Insert---------
    // string s1 = "nincompoop";
    // s1.insert(2, "lol");
    // cout << s1 << endl;
    // cout << s1.size();

    //---------- SubString-------
    // string s1 = "nincompoop";
    // cout << s1.substr(6, 4);

    //-----------String To Integer------
    // string s1 = "786";
    // cout << stoi(s1);

    //--------  Integer to String----
    // int x = 786;
    // cout << to_string(x) + "2" << endl;

    //-------- Sorting--------
    string s1 = "wfqcwtghegf";
    sort(s1.begin(), s1.end());
    cout << s1;

    return 0;
}