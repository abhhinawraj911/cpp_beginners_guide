// Adding two Time
#include <bits/stdc++.h>
using namespace std;

int main(){

    int h,m,s;
    int h1,h2,m1,m2,s1,s2;
    int rs,rm,rh;
    int carry = 0;
    cout << endl << "Enter Time1 in HH MM SS formate : ";
    cin >> h1 >> m1 >> s1;
    cout << endl << "Enter Time2 in HH MM SS formate : ";
    cin >> h2 >> m2 >> s2;


    s = s1+s2;
    if (s > 60){
        rs = s - 60;
        carry = 1;
    }
    else {
        rs = s1+s2;
    }
    
    m = m1+m2+carry;
    if (m > 60){
        rm = m - 60;
        carry = 1;
    }
    else {
        rm = s1+s2+carry;
        carry = 0;
    }

    h = h1+h2+carry;
    if (h > 24){
        rh = h - 24;
        carry = 1;
    }
    else {
        rh = h1+h2+carry;
        carry = 0;
    }

    cout << endl << "Your New Time : " << rh << ":" << rm << ":" << rs << endl;
}