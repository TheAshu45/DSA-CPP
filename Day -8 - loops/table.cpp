#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number for table";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        int a = num*i;
        cout<<a<<endl;
    }
    return 0;
}