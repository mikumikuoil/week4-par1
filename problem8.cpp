#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a character: ";
    char input;
    cin>>input;
    if (isupper(input)) {
        cout<<"Uppercase alphabet"<<endl;
    } else if (islower(input)) {
        cout<<"Lowercase alphabet"<<endl;
    } else { cout<<"Not a valid alphabet"<<endl;}
}