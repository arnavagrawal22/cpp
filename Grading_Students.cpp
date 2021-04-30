#include <bits/stdc++.h>
using namespace std;
int grade(int k)
{
    if (k < 38)
    {
        return k;
    }
    else

    {
        int l = k;
        for (int i = 0; i < 3; i++)
        {
            if (l % 5 == 0)
            {
                return l;
                break;
            }
            l++;
        }
        return k;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int gr;
        cin >> gr;
        cout << grade(gr) << endl;
    }

    return (0);
}