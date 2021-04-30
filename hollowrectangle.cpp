#include <iostream>
using namespace std;

int main()
{
    int a, b; //a is row and b is column
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || j == 0 || i == (a - 1) || j == (b - 1))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return (0);
}