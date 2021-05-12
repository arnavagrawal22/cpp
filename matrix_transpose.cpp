#include <iostream>
using namespace std;

void print_transpose(int arr[][1100], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n][1100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    print_transpose(a, n);

    return (0);
}