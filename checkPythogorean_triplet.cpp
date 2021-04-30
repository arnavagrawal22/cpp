#include <iostream>
using namespace std;
int max(int n1, int n2, int n3)
{
    int max;
    if (n1 > n2)
    {
        if (n1 > n3)
            max = n1;
        else
            max = n3;
    }
    else if (n2 > n3)
    {
        max = n2;
    }
    else
        max = n3;
    return max;
}
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int k, l, m;
    k = max(a, b, c);
    if (k == a)
    {
        l = b;
        m = c;
    }
    else if (k == b)
    {
        l = a;
        m = c;
    }
    else
    {
        k = c;
        l = a;
        m = b;
    }

    if (k * k == l * l + m * m)
    {
        cout << "yes";
    }

    return (0);
}