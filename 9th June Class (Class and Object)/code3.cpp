// Constructor in C++ using OOPs
#include<iostream>
#include<string>
using namespace std;

class person{
    
    private:
    
    int age=3;
    string name="Ab";

    public:
    person() // Default Constructor 
    {
        age=21;
        name="null";
    }
    person(int a, string n) //Paramiterized Constructor
    {
        age=a;
        name=n;
    }
    void getvalue() // Member Function
    {
        cout<<age<<endl;
        cout<<name<<endl;
    }
};

int main()
{
    person p1,p2(21,"Sai"),p3;
    
    p1.getvalue();
    p2.getvalue();
 // p3.age;   //Privet can't be accessed
 // p3.name;  //Privet can't be accessed
}