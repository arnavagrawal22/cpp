#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max;

    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else if (b > c)
    {
        max = b;
    }
    else
        max = c;

    cout << max << endl;

    return (0);
}