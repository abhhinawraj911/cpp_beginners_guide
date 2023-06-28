
//
#include<iostream>
using namespace std;

// Protected Class Base
class Base{
    protected:
    int x = 10;
};
// Public Class Derived
class Derived: public Base{
    public:
    //Protected fuction
    void exe(){
    cout<<"X Value: "<<x<<endl;
    }
};

int main(){
    Derived d;
    d.exe();
}