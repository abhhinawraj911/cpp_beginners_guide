// multiple Inherirance
#include<iostream>
using namespace std;

// Parent Class 1
class base1{

    public:
    void Base1(){
        cout<<"Base1 executed"<<endl;
    }
};
// Parent Class 2
class base2{

    public:
    void Base2(){
        cout<<"Base2 executed"<<endl;
    }
};
// Child Class
class derived: public base1, public base2{
    public:
};

int main(){
    derived d;
    d.Base1();
    d.Base2();
}