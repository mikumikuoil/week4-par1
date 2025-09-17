#include <iostream>
using namespace std;
int main() {
    cout<<"Enter three digit number: ";
    int x;
    cin>>x;
    int remainder1,remainder2,remainder3;
    remainder1=x%10;
    remainder2=(x-remainder1)%100;
    remainder3=(x-remainder2-remainder1)%1000;
    if (remainder1/1==remainder3/100) {
        cout<<x<<" is a palindrome"<<endl;
    } else { cout<<x<<" is not a palindrome"<<endl;}

}