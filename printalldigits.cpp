#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int digit;
        digit = n % 10;
        n /= 10;
        cout << digit << endl;
    }

    return (0);
}