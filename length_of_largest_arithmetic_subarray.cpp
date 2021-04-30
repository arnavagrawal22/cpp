#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int pd = a[1] - a[0];
        int ans = 2;
        int final = 2;
        for (int i = 2; i < n; i++)
        {
            int d = a[i] - a[i - 1];
            if (d == pd)
            {
                ans++;
            }
            else
            {
                pd = d;
                ans = 2;
            }
            final = max(final, ans);
        }
        cout << "Case #" << j << ": " << final<<endl;
    }
    return (0);
}