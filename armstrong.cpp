#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n;
    cin >> a;
    n = a;
    int count = 0;
    while (n > 0)
    {
        int digit;
        digit = n % 10;
        n /= 10;
        count++;
    }
    cout << count;
    n = a;
    int armstrong = 0;
    while (n > 0)
    {
        int digit;
        digit = n % 10;
        armstrong += pow(digit, count);
        n /= 10;
        
    }
    cout<<armstrong;

    if (armstrong == a)
    {
        cout << "Armstrong";
    }

    return (0);
}

