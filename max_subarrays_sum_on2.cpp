#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int currsum[n + 1];
    int max_sum = INT_MIN;
    currsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + a[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        int sum;

        for (int j = 1; j <= i; j++)
        {
            sum = currsum[i] - currsum[j - 1];
            max_sum = max(sum, max_sum);
        }
    }

    cout << max_sum;
    return (0);
}