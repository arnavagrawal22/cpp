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
        int a[n + 1];
        a[n] = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "Case #" << j + 1 << ": " << "1" << endl;
            return 0;
        }
        int ans = 0;
        int max_no = -1;
        for (int i = 0; i < n; i++)
        {

            if (a[i] > max_no && a[i] > a[i + 1])

            {
                ans++;
            }
            max_no = max(max_no, a[i]);
        }

        cout << "Case #" << j + 1 << ": " << ans << endl;
    }
    return (0);
}
