#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Not Prime";
    }
    else
        cout << "prime";
}