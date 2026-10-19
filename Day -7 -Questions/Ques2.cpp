#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter a number three";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "Enter Num1 is greater";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Enter Num2 is greater";
    }
    else
    {
        cout << "Enter Num3";
    }
    return 0;
}