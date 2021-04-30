#include <iostream>
using namespace std;
int min(int n1, int n2, int n3)
{
    int min;
    if (n1 < n2)
    {
        if (n1 < n3)
            min = n1;
        else
            min = n3;
    }
    else if (n2 < n3)
    {
        min = n2;
    }
    else
        min = n3;
    return min;
}
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
    cout << "max " << max(a, b, c) << endl;
    cout << "min " << min(a, b, c) << endl;

    return (0);
}