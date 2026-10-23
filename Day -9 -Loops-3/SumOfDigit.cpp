#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number and sum of digit";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int LastDigit = n % 10;
        sum = sum + LastDigit;
        n /= 10;
    }
    cout << sum;
}