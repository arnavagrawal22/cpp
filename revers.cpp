#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n;
    int rev = 0;
    while (n > 0)
    {
        int digit;
        digit = n % 10;
        n /= 10;
        rev = rev * 10 + digit;
    }
    cout << rev << endl;

    return (0);
}