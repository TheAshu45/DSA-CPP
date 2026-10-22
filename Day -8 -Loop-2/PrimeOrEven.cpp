#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    if (n <= 1)
        cout << "Not Prime";
    else
    {
        bool prime = true;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << "Prime Number";
        else
            cout << "Not Prime";
    }

    return 0;
}