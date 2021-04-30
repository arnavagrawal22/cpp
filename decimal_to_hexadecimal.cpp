#include <bits/stdc++.h>
using namespace std;
string dtoh(int n)
{
    int x;
    string ans = "";
    x = 1;
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int digit;
        digit = n / x;
        if (digit <= 9)
        {
            ans = ans + to_string(digit);
        }
        else
        {
            char c = 'A' + digit - 10;
            ans.push_back(c);
        }

        n = n - x * digit;
        x /= 16;
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    cout << dtoh(a) << endl;
    return (0);
}