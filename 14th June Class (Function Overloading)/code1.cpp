// Fuction Overloading
#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<"First one Executed"<<endl;
    int c = a + b;
    cout<<"Adding Values : "<<c<<endl;
}
void add(double x, double y){
    cout<<"Second one Executed"<<endl;
    float z = x+y;
    cout<<"Adding Values : "<<z<<endl;
}

int main(){
    cout<<endl;
    add(1,3);
    add(11.3,4.5);

    return 0;
}