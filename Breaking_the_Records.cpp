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
    int maxi = a[0];
    int mini = a[0];

    int c1 = 0;
    int c2 = 0;

    for (int i = 1; i < n; i++)
    {
        int l = maxi;
        int m = mini;
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
       
        if (maxi != l )
        {
            c1++;
        }
        else if (mini != m)
        {
            c2++;
        }
    }
    cout << c1 << " " << c2;
    return (0);
}