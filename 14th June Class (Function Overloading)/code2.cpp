#include<iostream>
using namespace std;

class overloading{
    public:

    void sum(int x, int y){
        int add = x + y;
        cout<<"Adding the Values : "<<add<<endl;
    }

    void sum(int x, int y){
        int diff = x - y;
        cout<<"Subtracting the Values : "<<diff<<endl;
    }

    void mul(float a, float b){
        float pro = a * b;
        cout<<"Product of the Values : "<<pro<<endl;
    }
};

int main(){

    overloading o;
    cout<<endl;
    o.sum(5,15);
    o.sum(43,13);
    o.mul(11.5,4.6);

    return 0;

}