// Virtual Function

/*
-Virtual funtion is a member funtion of a base class that is expected to be redefined(Overridden) in the derived class.

syntex:
    class Base{
        public:
        Virtual void virtualfunction(); 
    }
*/

#include<iostream>
using namespace std;

class Shape{
    public:
    double base, height;

    Shape(double a, double b){
        base = a;
        height = b;
    }

    double area(){
        cout<<"This is a Base Class Area : "<<endl;
    }

    virtual void Triangle();

};

class Triangle: public Shape{
    public:
        Triangle(double a, double b):Shape(a,b) {}
        double area(){
            cout<<"Area of The Triangle : ";
            return (base*height)/2;
        }
};

class Rectangle: public Shape{
    public:
    Rectangle(double a, double b): Shape(a,b) {}
    double area(){
        cout<<"Area of the Rectangle : ";
        return base*height;
    }
};

int main(){
    cout<<endl;
    Shape *s;
    Triangle t(10.0,12.1);
    s=&t;
    cout<<s -> area()<<endl;
    Rectangle r(23.1,66.7);
    s=&r;
    cout<<s -> area()<<endl;
}