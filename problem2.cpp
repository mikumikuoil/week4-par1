#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if (n>=0) {
        cout<<"Positive";
        if (n%2==0) {
            cout<<" and Even"<<endl;
        } else {cout<<" and Odd"<<endl;}
    }
    else if (n<0) {
        cout<<"Negative";
        if (n%2==0) {
            cout<<" and Even"<<endl;
        } else {cout<<" and Odd"<<endl;}
    }
    return 0;
}