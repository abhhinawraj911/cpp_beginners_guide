// Car Speed Error Handing
#include<bits/stdc++.h>
using namespace std;

class overSpeed: public exception{
    
    int speed;
    public:
    const char* what(){
        return "Check Speed....";
    }
    void getSpeed(){
        cout<<"Ur Speed"<<speed<<endl;
    }
    void setSpeed(int speed){
        this -> speed = speed;
    }
};
class Car{
    int speed;
    public:
    Car(){
        speed = 0;
        cout<<"Speed is: "<<speed<<endl;
    }
    void accelerate(){
        for(;;){
            speed += 10;
            cout<<"speed is: "<<speed<<endl;
            if(speed>=200){
                overSpeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};


int main(){
    Car mycar;
    try{
        mycar.accelerate();
    }
    catch(overSpeed s){
        cout<<s.what()<<endl;
        s.getSpeed();
    }
}