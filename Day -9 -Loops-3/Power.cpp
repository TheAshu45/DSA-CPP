#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a base and power: ";
    cin >> a >> b;

    int ans = 1;

    if (a == 0 && b == 0)
    {
        cout << "Indeterminate";
    }
    else if (b < 0)
    {
        cout << "Negative power not supported";
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            ans *= a;
        }

        cout << ans;
    }

    return 0;
}
