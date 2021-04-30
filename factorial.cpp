#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int srdc = 1;
    for (int i = 1; i <= n; i++)
    {
        srdc *= i;
    }

    cout << srdc << endl;
    return (0);
}