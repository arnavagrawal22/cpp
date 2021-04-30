#include <bits/stdc++.h>
#include <climits>
using namespace std;
void max_Run(int arr[], int n)
{
    int max_no;
    max_no = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no, arr[i]);

        arr[i] = max_no;
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
    max_Run(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return (0);
}