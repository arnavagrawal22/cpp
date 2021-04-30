#include <iostream>
#include <cmath>
using namespace std;
int btod(int n)
{
    int count = 0;
    int digit;
    int decimal = 0;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        decimal += digit * pow(2, count);
        count++;
    }
    return decimal;
}
int main()
{

    int a;
    cin >> a;
    cout << btod(a)<<endl;
    return (0);
}