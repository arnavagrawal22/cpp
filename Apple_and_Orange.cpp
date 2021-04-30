#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int app[m];
    for (int i = 0; i < m; i++)
    {
        cin >> app[i];
    }
    int man[n];
    for (int i = 0; i < n; i++)
    {
        cin >> man[i];
    }
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < m; i++)
    {
        if (app[i] + a >= s && app[i] + a <= t)

        {
            c1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (man[i] + b >= s && man[i] + b <= t)

        {
            c2++;
        }
    }

    cout << c1 << endl;
    cout << c2 << endl;

    return (0);
}
