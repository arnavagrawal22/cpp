#include <bits/stdc++.h>
using namespace std;
int max_min_array(int arr[], int n)
{
    int max_no = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no, arr[i]);
    }

    return max_no;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = max_min_array(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            count++;
        }
    }
    cout << count;
    return (0);
}
