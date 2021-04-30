#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a ;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= (2*a) ; j++)
        {
            if (j>i && j<= 2*a-i )
            {
                cout << " ";
            }
            else
                cout << "*";
            
        }
        cout << endl;

        
    }

    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= (2*a) ; j++)
        {
            if (j>i && j<= 2*a-i )
            {
                cout << " ";
            }
            else
                cout << "*";
            
        }
        cout << endl;

        
    }


    return (0);
}