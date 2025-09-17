#include <iostream>
using namespace std;
int main() {
    cout<<"Enter three numbers: ";
    int a,b,c;
    int d,num1,num2;
    cin>>a>>b>>c;
    d=(b*b)-4*a*c;
    if (d>0) {
        num1=(-b+sqrt(d))/(2*a);
        num2=(-b-sqrt(d))/(2*a);
        cout<<"x1="<<num1<<" x2="<<num2<<endl;
    }
    else if (d<=0) {
        num1=(-b)/(2*a);
        num2=(-b)/(2*a);
        cout<<"x1="<<num1<<" x2="<<num2<<endl;
    }
    return 0;
}