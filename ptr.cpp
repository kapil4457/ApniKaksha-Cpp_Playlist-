#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int *a)
{
    *a++;
}
int main()
{
    // int a = 5;
    // int *aptr;
    // aptr = &a;

    // cout << &a << endl;  //address
    // cout << aptr << endl;  //address
    // cout << *aptr << endl;  //value

    // aptr++;
    // cout << aptr;

    // int arr[] = {10, 20, 30};
    // int *ptr = arr;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *ptr << " ";
    //     ptr++;
    // }

    int a = 2;
    int b = 3;
    swap(&a, &b);
    increment(&a);
    cout << a << endl;
    cout << b << endl;
    return 0;
}