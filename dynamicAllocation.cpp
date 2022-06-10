#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;         // Stored in Stack
    int *p = new int(); // Allocate in Heap
    *p = 10;
    delete (p); // Deallocate Memory

    p = new int[4];
    delete (p);
    p = NULL;

    return 0;
}