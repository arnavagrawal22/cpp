#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = a; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {

            cout << "*";
        }
        cout << endl;
    }

    return (0);
}