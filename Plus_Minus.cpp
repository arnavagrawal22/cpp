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
    int p = 0;
    int ne = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            p++;
        }
        else if (a[i] < 0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    cout << float (p)/n << endl;
    cout << float (ne)/n << endl;
    cout << float (z)/n << endl;

    return (0);
}