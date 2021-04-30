#include <bits/stdc++.h>
using namespace std;
int kadane(int a[], int n)
{
    int max_sum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        max_sum = max(max_sum, currsum);
    }
    return max_sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int wrap_max = kadane(a, n);
    int nonwrap_max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * -1;
    }
    nonwrap_max = sum + kadane(a, n);

    cout << max(wrap_max, nonwrap_max);

    return (0);
}