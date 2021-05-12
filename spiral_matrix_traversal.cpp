#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout << a[row_start][i] << " ";
        }
        row_start++;

        for (int j = row_start; j <= row_end; j++)
        {
            cout << a[j][col_end] << " ";
        }
        col_end--;
        for (int k = col_end; k >= col_start; k--)
        {
            cout << a[row_end][k] << " ";
        } 
        row_end--;
        for (int l = row_end; l >= row_start; l--)
        {
            cout << a[l][col_start] << " ";
        }
        col_start++;
    }

    return (0);
}