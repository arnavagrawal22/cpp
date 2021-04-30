#include <bits/stdc++.h>
using namespace std;

int htod(string n)
{
    int s = n.size();

    int ans = 0;
    int count = 0;
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + (n[i] - '0') * pow(16, count);
        }
        else
            ans = ans + (n[i] - 'A' + 10) * pow(16, count);
        count++;
    }
    return ans;
}
int main()
{
    string a;
    cin >> a;
    cout << htod(a);
}
