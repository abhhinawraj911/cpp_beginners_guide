#include<iostream>
using namespace std;

class student{
    public:
        void std(){
            int age = 11;
            string gender = "Female";
            char grade = 'B';
        
        cout<<"Student : "<<endl;
        cout<<"Display Data"<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Grade : "<<grade<<endl;
        }
};

class staff{
    public:
        void stf(){
            int age = 32;
            string gender = "Female";
            int salary = 50000;

        cout<<"\nStaff Data : "<<endl;
        cout<<"Display data"<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Salary : "<<salary<<endl;
        }
};

class data: public student, public staff {
    public:
    student st;
    staff sta;
    void out()
    {
        st.std();
        sta.stf();
    }
};
int main(){
    data Get;
    Get.out();
}