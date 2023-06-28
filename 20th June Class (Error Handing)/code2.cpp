//
/*

*/
#include<bits/stdc++.h>
using namespace std;

int spd;

class car{

    public:
    void input(){

        cout << endl << "Enter Your Current Speed : ";
        cin >> spd;

    }
    public:
    void errorcheck(){

        try{
            if(spd>=150){
                throw "Your Are Over Speeding.";
                cout << spd << endl;
            }
            else if(spd<=0){
                throw "You'ar at Right Speed";
                cout << spd << endl;
            }
        }
        catch(int i){
            cout << endl << "Warning! \n" << i;
        }
        catch(int i){
            cout << endl << "Good \n" << i;
        }
        catch(...){
            cout << "Error Occured\n";
            cout << "Speed is Out of Range.\n";
        }   
    }
};

int main(){

    car c;
    c.input();
    c.errorcheck();
}