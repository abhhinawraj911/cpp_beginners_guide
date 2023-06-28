#include <bits/stdc++.h>
using namespace std;

int sec(int s1, int s2, int carry){

    int rs;
    int s = s1+s2+carry;
    if (s > 60){
        rs = s - 60;
    }
    else {
        rs = s1+s2;
    }

    return rs

}
int min(int m1, int m2, int carry){

    int m = m1+m2+carry;
    int rm;
    if (m > 60){
        rm = m - 60;
        carry = 1;
    }
    else {
        rm = s1+s2;
    }

    return rm

}
int hr(int h1, int h2, int carry){

    hr();
    int h = h1+h2+carry;
    int rh;
    if (h > 24){
        rh = h - 24;
        carry = 1;
    }
    else {
        rh = h1+h2;
    }

    return rh;

}

int main(){

    int h1,h2,m1,m2,s1,s2;
    cout << endl << "Enter Time1 in HH:MM:SS formate : ";
    cin >> h1 >> m1 >> s1;
    cout << endl << "Enter Time2 in HH:MM:SS formate : ";
    cin >> h2 >> m2 >> s2;

    int carry = 0
    if (s1+s2 > 60){
        carry = 1;
    }

    sec(s1,s2,carry);

    int carry = 0;
    if (m1+m2 > 60){
        carry = 1;
    }

    min(m1,m2,carry);

    int carry = 0;
    if (h1+h2 > 24){
        carry = 1;
    }

    hr(h1,h2,carry);
}