#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int rev =0;
    while(num!=0){
        rev*=10;
        rev +=(num%10);
        num/=10;
    }
    cout<<rev;
}