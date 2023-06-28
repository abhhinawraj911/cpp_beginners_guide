#include<iostream>
using namespace std;

// Parent Class 1
class base1{

    public:
    void Base(){
        cout<<"Base1 executed"<<endl;
    }
};
// Parent Class 2
class base2{

    public:
    void Base(){
        cout<<"Base2 executed"<<endl;
    }
};
// Child Class
class derived: public base1, public base2{
    public:
};

int main(){
    derived d;
    d.base1::Base();
    d.base2::Base();
}