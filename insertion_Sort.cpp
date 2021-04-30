#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int current = arr[i];

        while (arr[j] > arr[i] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
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

    insertion_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return (0);
}