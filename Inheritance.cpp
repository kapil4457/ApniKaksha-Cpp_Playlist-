#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Func1 called.." << endl;
    }
};

// Single Level Inheritance
class B : public A
{
public:
    void func2()
    {
        cout << "Func2 called..." << endl;
    }
};

// Multiple Inheritance
class C : public A, public B
{
public:
};

// multiLevel Inheritance
class D : public B
{
};
int main()
{
    //--------Single Inhertance--------
    // B b;
    // b.func1();

    //--------Multiple Inheritance-----------
    // C c;
    // c.func1();
    // c.func2();

    //--------Multi Level  Inhertance---------
    D d;
    d.func1();
    d.func2();

    return 0;
}