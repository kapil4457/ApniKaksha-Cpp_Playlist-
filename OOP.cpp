#include <bits/stdc++.h>
using namespace std;

class student
{

    // These are the data members
public:
    string name;
    int age;
    // Default Constructor
    student()
    {
    }

    // Parameterized Constructor
    student(string s, int a)
    {
        name = s;
        age = a;
    }

    // Copy  Constructor
    student(student &a)
    {
        cout << "Copy Cosntructor" << endl;
        name = a.name;
        age = a.age;
    }

    void setName(string s)
    {
        name = s;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
    void printInfo()
    {
        cout << name << " : " << age << endl;
    }

    // Destuctor
    ~student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    student arr[3];

    //--------- Normal Way to create objects----------

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Name = ";
    //     cin >> arr[i].name;
    //     cout << "Age = ";
    //     cin >> arr[i].age;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    // ----------Constructor Way to create objects-----------
    student a1("kapil", 19);

    a1.getInfo();

    return 0;
}