#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum[n];

    for (int i = 0; i < n; i++)
    {
        int sum1 = 0;
        for (int j = 0; j <= i; j++)
        {
            sum1 += arr[j];
        }

        sum[i] = sum1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " " << endl;
    }

    return (0);
}