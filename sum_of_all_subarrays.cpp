#include <bits/stdc++.h>
using namespace std;

void sum_subarray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i; j < n; j++)
        {
            count += arr[j];
            cout << count << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sum_subarray(array, n);
    return (0);
}