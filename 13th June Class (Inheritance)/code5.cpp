// Hybrid Inharitance
#include<iostream>
using namespace std;

// Parent Class 1
class vehicle{
    public:
    void apply_break(){
        cout<<"Apply Break"<<endl;
    }
    void speed(){
        cout<<"Increase Speed"<<endl;
    }
};
// Parent class 2
class fare{
    public:
    void far(){
        cout<<"Pay for the Ticket"<<endl;
    }
};
// Child class of Parent Class 1
class car: public vehicle{
    public:
};
// Child Class of Parent Class 1 and Parent Class 2
class bus: public vehicle, public fare{
    public:
};

int main(){
    vehicle v;
    fare f;
    cout<<"For Car Class :"<<endl;
    car c;
    c.apply_break();
    c.speed();

    cout<<"\nFor Bus Class :"<<endl;
    bus b;
    b.apply_break();
    b.speed();
    b.far();

}