
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int candies[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }

    int extra;
    cin >> extra;

    int max_no = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no, candies[i]);
    }
    cout << max_no << endl;

    int ans[100];

    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extra >= max_no)
        {
            ans[i] = 1;
        }
        else
            ans[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return (0);
}