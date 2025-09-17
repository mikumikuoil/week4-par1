#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a year: ";
    int y;
    cin>>y;
    if ((y%4==0 && y%100!=0)||(y%400==0)) {
        cout<<"is a leap year"<<endl;
    } else { cout<<"is NOT a leap year"<<endl;}
}