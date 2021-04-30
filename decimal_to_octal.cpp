#include <bits/stdc++.h>
using namespace std;
int dtoo(int n)
{
    int x;
    int ans=0;
    x = 1;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x> 0)
    {
        int digit;
        digit = n / x;
        ans = ans * 10 + digit;
        n = n - x*digit ;
        x /= 8;
        
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    cout << dtoo(a) << endl;
    return (0);
}