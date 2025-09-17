#include <iostream>
using namespace std;
int main() {
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    if (a%b==0) {
        cout<<a<<" is divisible by "<<b<<endl;
    } else { cout<<a<<" is NOT divisible by "<<b<<endl;}
}