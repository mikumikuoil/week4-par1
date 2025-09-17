#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the speed of the vehicle: ";
    int spd;
    cin>>spd;
    if (spd>80) {
        cout<<"The speed is too fast"<<endl;
    }
    else if (spd<20) {
        cout<<"The speed is too slow"<<endl;
    }
    else { cout<<"The speed is just right"<<endl;}
}