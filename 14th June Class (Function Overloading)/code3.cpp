// Operator Overloading
#include<iostream>
using namespace std;

class marks{

    public:
    int intmarks;
    int extmarks;

    marks(){
        intmarks = 0;
        extmarks = 0;
    }

    marks(int im, int em){

        intmarks = im;
        extmarks = em;
    }

    void display(){
        cout<<intmarks<<endl;
        cout<<extmarks<<endl;
    }

    marks operator+(marks m){
        marks temp;
        temp.intmarks = intmarks+m.intmarks;
        temp.extmarks = extmarks+m.extmarks;

        return temp;
    }

};

int main(){

    cout<<endl;
    marks m1(10,20), m2(30,40);
    marks m3 = m1 + m2;
    m3.display();

}