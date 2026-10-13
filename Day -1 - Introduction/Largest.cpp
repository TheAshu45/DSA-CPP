#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter a three number to check largest number";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 || num1 > num3)
    {
        cout << "Number a is largest";
    }
    else if (num2 > num3)
    {
        cout << "number b is largest";
    }
    else
    {
        cout << "Number c is the largest";
    }
    return 0;
}