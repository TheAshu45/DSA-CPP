#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            
        }
        cout << endl;
    }

    // for(int i = 1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if((j+i)>n)cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }


}