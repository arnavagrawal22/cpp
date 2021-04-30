#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        max_no = max(max_no, arr[i]);
        min_no = min(min_no, arr[i]);
    }
    long int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    cout << sum - max_no << " " << sum - min_no;
    return (0);
}