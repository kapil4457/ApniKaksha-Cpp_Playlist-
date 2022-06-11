#include <bits/stdc++.h>
using namespace std;

// n -> Size of the matrix
// x -> X co-ordinate
// y -> Y co-ordinate
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
    }
}
int main()
{
    cout << "hii";
    return 0;
}