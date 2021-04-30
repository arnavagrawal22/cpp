#include <iostream>
using namespace std;
int swap(int n1, int n2)
{
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
    cout << n1 << n2;
    return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    return (0);
}