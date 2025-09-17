#include <iostream>
using namespace std;
int main() {
    cout<<"Enter values for three angles: ";
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b+c==180) {
        cout<<"The triangle is valid"<<endl;
    } else { cout<<"The triangle is not valid"<<endl;}
}