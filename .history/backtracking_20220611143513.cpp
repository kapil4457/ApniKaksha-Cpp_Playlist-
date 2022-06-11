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

// arr -> Given array with all paths
// solArr -> Array with the path through which the rat reaches the end
bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}
int main()
{
    int size;
    cin >> size;

    // Obstacle Path
    int **arr = new int *[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Solution Arr
    int **solArr = new int *[size];
    for (int i = 0; i < size; i++)
    {
        solArr[i] = new int[size];
        for (int j = 0; j < size; j++)

        {
            solArr[i][j] = 0;
        }
    }

    // Calling

    return 0;
}