#include<bits/stdc++.h>
using namespace std;

template<class T>
class Calculator{

    T num1, num2;
    public:
    Calculator(T n1, T n2){

        num1 = n1;
        num2 = n2;

    }
    T add(){

        return num1 + num2;

    }
    T sub(){

        return num1 - num2;
        
    }
    T mul(){

        return num1 * num2;
        
    }
    T div(){

        return num1 / num2;
        
    }
    void display(){

        cout << endl << add() << endl;
        cout << endl << sub() << endl;
        cout << endl << mul() << endl;
        cout << endl << div() << endl;

    }
};

int main(){

    cout << endl << "Integer Value : " << endl;
    Calculator<int> C(3,5);
    C.display();
    cout << endl << "Double Value : " << endl;
    Calculator<double> d(2.4,5.6);
    d.display();
    cout << endl;
    return 0;

}