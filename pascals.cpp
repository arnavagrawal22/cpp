#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                value = 1;
            }
            else
                value = value * (i - j + 1) / j;

            cout << value << "   ";
        }
        cout << endl;
    }

    return (0);
}