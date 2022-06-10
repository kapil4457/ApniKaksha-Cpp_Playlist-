#include <bits/stdc++.h>
using namespace std;

// Sum of n numbers
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
// n raised to poer p
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

// Factorial of a number
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}

// Print nth fibonacci number
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// Check if the given array is sorted or not
bool sorted(int arr[], int start, int end)

{
    if (start == end - 1)
    {
        if (arr[start] < arr[start + 1])
        {
            return true;
        }
    }
    else if (arr[start] < arr[start + 1])
    {
        sorted(arr, start + 1, end);
    }

    return false;
}

// Print in increasing  order

void printIncreasing(int n)
{
    static int c = 0;
    if (c == n)
    {
        cout << n;
        return;
    }
    else
    {
        cout << c << " ";
        c++;
        printIncreasing(n);
    }
}

// Print NUmbers in decreasing number
void printdecreasing(int n)
{

    if (n == 0)
    {
        cout << n;
        return;
    }
    else
    {
        cout << n << " ";

        printdecreasing(n - 1);
    }
}

// Find the first  occurance of a number in an array
int firoccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firoccur(arr, n, i + 1, key);
}
// Find the last occurance of a number in an array

int lastoccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = lastoccur(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

// Reverse a string using recursion
void revStr(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string ros = str.substr(1);
    cout << ros << endl;
    revStr(ros);
    cout << str[0];
}

// Reverse pi with 3.14 in the given string

string replaceStr(string str, int start)
{
    if (start > str.length())
    {
        return str;
    }
    if (str[start] == 'p' && str[start + 1] == 'i')
    {
        str.replace(start, 2, "3.14");
        return replaceStr(str, start + 2);
    }
    else
    {
        return replaceStr(str, start + 1);
    }
    // cout << "End" << endl;
    return str;
}

// Tower of hanoi
void toh(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }

    toh(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    toh(n - 1, helper, dest, src);
}

// Remove all duplicates fom a string

string removeDup(string str, char start)
{
    static int idx = 0;
    idx++;

    if (str[idx] == start)
    {
        str.erase(start);
        return removeDup(str, idx);
    }
    else
    {
        removeDup(str, idx);
    }
}
int main()
{

    // cout << sum(5) << endl;
    // cout << power(4, 3) << endl;
    // cout << fac(10) << endl;
    // cout << fib(10) << endl;

    int arr[9] = {1, 2, 3, 4, 51, 6, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << sorted(arr, 0, size);

    // printIncreasing(10);
    // cout << endl;
    // printdecreasing(10);

    // cout << firoccur(arr, 9, 0, 2) << endl;
    // cout << lastoccur(arr, 9, 0, 2) << endl;

    // revStr("kapil");
    // cout << replaceStr("pippopppirtpi", 0);
    toh(3, 'A', 'C', 'B');
    return 0;
}