// Constructor in C++ using OOPs
#include<iostream>
#include<string>
using namespace std;

class person{
    
    private:
    int age;
    string name;

    public:
    person(int age, string name) //Paramiterized Constructor
    {
        this -> age=age;
        this -> name=name; // this is allowing to take the variable from privet and assinging the value prom the parameter
    }
    void getvalue() // Member Function
    {
        cout<<age<<endl;
        cout<<name<<endl;
    }
};

int main()
{
    person p1(21,"Sai");  
    p1.getvalue();
}