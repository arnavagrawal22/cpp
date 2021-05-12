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

    int k;
    cin >> k;
    int i = 0;
    int j = m - 1;

    while (i < n && j < m)
    {
        if (a[i][j] == k)
        {
            cout << "true";
            break;
        }
        else if (a[i][j] > k)
        {
            j--;
        }
        else
            i++;
    }

    return (0);
}