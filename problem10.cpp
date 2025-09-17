#include <iostream>
using namespace std;
int main() {
    cout<<"Enter x and y: ";
    int x,y;
    cin>>x>>y;
    int dist;
    dist=sqrt((x*x+y*y));
    if (dist>10) {
        cout<<"The point ("<<x<<","<<y<<") is not in circle"<<endl;
    }
    else if (dist<=10) {
        cout<<"The point ("<<x<<","<<y<<") is in circle"<<endl;
    }
}