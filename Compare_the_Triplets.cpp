#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alice[3];
    int bob[3];
    int ans[2];
    for (int i = 0; i < 3; i++)
    {
        cin >> alice[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> bob[i];
    }
    int a = 0;
    int b = 0;
    for (int i = 0; i < 3; i++)
    {
        if (alice[i] > bob[i])
        {
            a++;
        }
        else if (bob[i] > alice[i])
        {
            b++;
        }
    }
    ans[0] = a;
    ans[1] = b;
    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
