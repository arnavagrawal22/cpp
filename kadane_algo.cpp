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

    cout << kadane(a, n);
    return (0);
}