#include <iostream>
using namespace std;
int is_prime(int n1, int n2)
{
    int flag;

    for (int i = n1; i <= n2; i++)

    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    is_prime(a, b);

    return (0);
}