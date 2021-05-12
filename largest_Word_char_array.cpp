#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n + 1);
    int currlen = 0;
    int maxlen = INT_MIN;
    cout << a << "\n";
    int i = 0;
    while (i <= n)
    {
        if (a[i] == '\0' || a[i] == ' ')
        {
            maxlen = max(currlen, maxlen);
            currlen = 0;
        }

        else
            currlen++;

        if (a[i] == '\0')
        {
            break;
        }

        i++;
    }
    cout << maxlen;
    return (0);
}