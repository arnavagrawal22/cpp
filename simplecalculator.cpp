    #include <iostream>
    using namespace std;

    int main()
    {
        char a;
        cin >> a;
        int b, c;
        cin >> b >> c;

        switch (a)
        {
        case '+':
            cout << b + c << endl;
            break;
        case '-':
            cout << b - c << endl;
            break;
        case '*':
            cout << b * c << endl;
            break;
        case '/':
            cout << b / c << endl;
            break;
        case '%':
            cout << b % c << endl;
            break;
        default:
            cout << "Operator not found!" << endl;
            break;
        }
        return 0;
    }