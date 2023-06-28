#include<iostream>
using namespace std;

class student{
    public:
    void base(){
        int r1 = 02;
        int marks = 420;

        cout<<"Roll no. "<<r1<<" Scores "<<marks<<endl;
    }
};
class excurr{
    public:
    void excr(){
        int r1 = 02;
        int marks = 120;

        cout<<"Roll no. "<<r1<<" Get "<<marks<<" in ExtraCurriculum "<<endl;
    }
};
class getmark: public student, public excurr{
    public:
};

int main(){
    getmark m;
    m.base();
    m.excr();
}