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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == k)
            {
                cout << "true";
            }
        }
    }

    return (0);
}