// Using og This Keyword
#include<iostream>
using namespace std;

class sample{
    public:
    void show(){
        cout<<"address of the current object = "<<this<<endl;
    }
};
int main(){
    sample s;
    s.show(); // We use This Keyword as a Pointer and get the Address of the Object

    return 0;
}