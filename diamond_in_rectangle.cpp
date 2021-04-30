#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)

    {
        for (int s = 1; s <= 2 * n - 1; s++)
        {
            if (s > n - i + 1 && s < n + i - 1)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)

    {
        for (int s = 1; s <= 2 * n - 1; s++)
        {
            if (s > n - i + 1 && s < n + i - 1)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }

    return (0);
}