#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n + 1];
    cin.ignore();
    cin.getline(a, n + 1);
    cout << a << "\n";
    bool check = 0;
    cout << a[n - 1] << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "Palindrome";
    }
    else
        cout << "Not";

    return 0;
}