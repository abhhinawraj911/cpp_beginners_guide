// In-Line Paramiterized function
#include<iostream>
using namespace std;

class base{
    public:
    int x;
    base(int x) : x{x} {}
};

void fun (base &b){
    cout<<b.x<<endl;
}

int main(){
    base b(10);
    cout<<b.x;

    return 0;

}