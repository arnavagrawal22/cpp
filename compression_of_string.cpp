#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string a = "";
    getline(cin, a);
    cout << a.length();
    sort(a.begin(), a.end());
    string b = "";
    b[0] = a[0];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != a[i - 1])
        {
            b.push_back(a[i]);
        }
    }
    cout << b << endl;
}