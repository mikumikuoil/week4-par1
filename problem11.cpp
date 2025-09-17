#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the weight and price for package No1: ";
    float weight,price, weight1,price1;
    cin>>weight>>price;
    cout<<"Enter the weight and price for package No2: ";
    cin>>weight1>>price1;
    if ((price/weight)<(price1/weight1)) {
        cout<<" Package 1 is better price"<<endl;
    }
    else if ((price/weight)>(price1/weight1)) {
        cout<<" Package 2 is better price"<<endl;
    }
    else {
        cout<<"Both packages are equal"<<endl;
    }
}