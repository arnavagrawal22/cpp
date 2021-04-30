#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(int a, int b)
{
    string ans = "";
    int carry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {

            ans.push_back(carry + '0');
            carry = 0;
        }
        else if (((a % 2) == 0 && (b % 2) == 1) || ((b % 2) == 0 && (a % 2) == 1))
        {
            if (carry == 1)
            {
                ans.push_back('0');
                carry = 1;
            }
            else
            {
                ans.push_back('1');
                carry = 0;
            }
        }
        else
        {

            ans.push_back(carry + '0');
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (carry == 1)
        {
            if (a % 2 == 1)
            {
                ans.push_back('0');
                carry = 1;
            }
            else
            {
                ans.push_back('1');
                carry = 0;
            }
        }
        else
        {

            ans.push_back(a % 2 + '0');
        }
        a /= 10;
    }
    while (b > 0)
    {
        if (carry == 1)
        {
            if (b % 2 == 1)
            {
                ans.push_back('0');
                carry = 1;
            }
            else
            {
                ans.push_back('1');
                carry = 0;
            }
        }
        else
        {

            ans.push_back(b % 2 + '0');
        }
        b /= 10;
    }
    if (carry == 1)
    {
        ans.push_back('1');
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
    return (0);
}