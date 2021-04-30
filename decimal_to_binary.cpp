#include <bits/stdc++.h>
using namespace std;
int dtob(int n)
{
    int x;
    int ans=0;
    x = 1;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x> 0)
    {
        int digit;
        digit = n / x;
        ans = ans * 10 + digit;
        n = n - x*digit ;
        x /= 2;
        
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    cout << dtob(a) << endl;
    return (0);
}