#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s = "";
    getline(cin, s);
    int count[26] = {0};
    cout << s.length() << endl;
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    int max_frequency = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max_frequency)
        {
            max_frequency = count[i];
            ans = 'a' + i;
        }
    }

    cout << max_frequency << endl
         << ans;

    return 0;
}