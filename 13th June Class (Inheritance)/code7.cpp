#include<iostream>
using namespace std;

class student{
    public:
        int agek = 11;
        string genderk = "Female";
        char grade = 'B';
};

class staff{
    public:
        int age = 32;
        string gender = "Female";
        int salary = 50000;
};

class data: public student, public staff {
    public:
    void out(){
        cout<<"Student : "<<endl;
        cout<<"Display Data"<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<genderk<<endl;
        cout<<"Grade : "<<grade<<endl;
        
        cout<<"\nStaff Data : "<<endl;
        cout<<"Display data"<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main(){
    data Get;
    Get.out();
}