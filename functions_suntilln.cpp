#include <iostream>
using namespace std;

int sum(int n)
{
    int sum;
    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int a;
    cin >> a;
    cout << sum(a) << endl;

    return (0);
}