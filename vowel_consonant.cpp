#include <iostream>
using namespace std;

int main()
{
    char n;
    cin >> n;
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'A' || n == 'E'|| n == 'I'|| n == 'O'|| n == 'U')
    {
        cout << "Vowel\n";
    }

    else
        cout << "Consonat\n";
    return (0);
}