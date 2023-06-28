#include<iostream>
using namespace std;
// Parent Class
class person{
    public:
    void talk(){
        cout<<"He can talk"<<endl;
    }
    void sleep(){
        cout<<"He can sleep"<<endl;
    }
};
// Child Class inharited to Person class
class trainer:public person{
    public:
    void trach(){
        cout<<"He can Teach"<<endl;
    }
};
// Child Class inharited to Person class
class devloper: public person{
    public:
    void devlop(){
        cout<<"He Will develope Software"<<endl;
    }
};
// Child Class inharited to Person class
class player: public person{
    public:
    void play(){
        cout<<"He can Play"<<endl;
    }
};

int main(){
    cout<<"Trainer....."<<endl;
    trainer T;
    T.trach();
    T.talk();
    T.sleep();
    cout<<"Developer....."<<endl;
    devloper D;
    D.devlop();
    D.talk();
    D.sleep();
    cout<<"Player....."<<endl;
    player P;
    P.play();
    P.talk();
    P.sleep();
}