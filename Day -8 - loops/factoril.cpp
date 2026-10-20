#include <iostream>
using namespace std;
int main()
{
    int num;
    int result = 1;
    cout << "Enter a number for factorial";
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        result = result * i;
    }
    cout << result << endl;
}