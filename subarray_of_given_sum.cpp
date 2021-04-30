#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cursum = a[0];
    int i = 0, j = 0, st, en;
    while (j < n && i < n)
    {

        if (cursum < s)
        {
            j++;
            cursum += a[j];
        }
        else if (cursum > s)
        {
            cursum -= a[i];
            i++;
        }
        else if (cursum == s)
        {
            cout << i << " " << j;
            return 0;
        }
    }

    return (0);
}