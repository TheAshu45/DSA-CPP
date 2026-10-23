// count of the number of the given digit of the number !!!

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter nu7mber to check digit number";
    cin >> n;
    int count = 0;
    if (n == 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << count << endl;
}