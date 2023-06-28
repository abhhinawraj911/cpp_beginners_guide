// Friend Function
/*
-Frined funtion is a funtion that is granted access to the privet and protected member of class.
-It declared within the class, but it is not a member funtion of the class.
-It can be useful when you need to allow external funtion or other classes to access private pr peropected member fo a class.

syntex:
    friend void friendfunction(MyClass Obj);
*/

#include<iostream>
using namespace std;

class Base{
    private:
    int x;
    public:
    Base(int y): x{y} {}

    friend void fun(Base &);
};

void fun(Base &b){
    cout<<b.x<<endl;
    b.x = 29;
    cout<<b.x<<endl;
}

int main(){
    Base b(10);
    fun(b);

    return 0;
}