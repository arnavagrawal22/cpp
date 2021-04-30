#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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

    bubble_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return (0);
}