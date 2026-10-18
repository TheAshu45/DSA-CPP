#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count =0;
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if(count==1) cout<<"nor Composite nor Prime";
    else if (count >=3) cout<<"Composite Number";
    else cout<<"Prime Number";
   
}