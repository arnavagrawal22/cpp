#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int coef =  float (fact(n) )/ (fact(r) * fact(n - r));
    cout << coef << endl ;
    return (0);
}