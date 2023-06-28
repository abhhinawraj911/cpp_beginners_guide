// Class and Object Box Code

#include<iostream>
using namespace std;

class box{

    public:
    int b = 5;
    int h = 5;
    int l = 5;

    int getvalue(){

        return l*b*h;

    }
};

int main(){
    
    box dimention;
    dimention.b;
    dimention.l;
    dimention.h;

    dimention.getvalue();

    cout<<dimention.getvalue()<<endl;

    return 0;
}