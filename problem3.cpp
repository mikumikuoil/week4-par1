#include <iostream>
using namespace std;
int main() {
    cout<<"Enter three numbers: ";
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if (n1>n2 && n1>n3) {
        cout<<n1<<" is the biggest"<<endl;
    }
    else if (n2>n1 && n2>n3) {
        cout<<n2<<" is the biggest"<<endl;
    }
    else if (n3>n1 && n3>n2) {
        cout<<n3<<" is the biggest"<<endl;
    }
    return 0;
}