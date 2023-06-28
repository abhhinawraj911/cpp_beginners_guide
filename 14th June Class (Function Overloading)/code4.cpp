#include<iostream>
using namespace std;

class matrix{

    private:
    int m[2][2] = {{2,3},{4,5}};
    
    public:
    void display(void);
};

void matrix :: display(){
    cout<<"Our Matrix : "<<endl<<m[0][0]<<m[0][1]<<endl<<m[1][0]<<m[1][1];
}

int main(){
    matrix d;
    d.display();
    
    return 0;
}