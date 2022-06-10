#include <iostream>
using namespace std;
int main()
{

    // Rectangle

    // for (int i = 0; i < 5; i++)
    // {

    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Hollow Rectangle
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         if (row == 0 || row == 4 || col == 0 || col == 4)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Inverted Pyramid

    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Half Pyramid after 180deg rotation

    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (j >= i - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Number Triangle
    //  for (int row = 1; row <= 5; row++)
    //  {
    //      for (int col = 1; col <= 5; col++)
    //      {
    //          if (col <= row)
    //          {
    //              cout << row;
    //          }
    //          else
    //          {
    //              cout << " ";
    //          }
    //      }
    //      cout << endl;
    //  }

    // Floyd's Triangle

    // int num = 1;
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         if (col <= row)
    //         {
    //             cout << num << " ";
    //             num++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ButterFly Pattern

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Inverted number triangle

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= 5 + 1 - row; col++)
    //     {

    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // O-1 Pattern

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (i >= j)
    //         {
    //             if ((i + j) % 2 == 0)
    //             {
    //                 cout << 1 << " ";
    //             }
    //             else
    //             {
    //                 cout << 0 << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // Rhombus Pattern

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Number Triangle
    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    // Palindromic Pattern

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     int j;

    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     int k = i;
    //     for (; j <= n; j++)
    //     {
    //         cout << k-- << " ";
    //     }
    //     k = 2;
    //     for (; j <= n + i - 1; j++)
    //     {
    //         cout << k++ << " ";
    //     }
    //     cout << endl;
    // }

    // Star Pattern

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = 0; j < n - i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Zig Zag Pattern
    int n;
    cin >> n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}