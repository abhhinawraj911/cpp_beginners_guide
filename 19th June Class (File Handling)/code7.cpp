#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int a = n;
    int i, len;
    int flag = 0;
    int x, y;

    cout << endl;
    cout << "Enter Your Number : ";
    cin >> n;

    int b = a*a;

    while(a != 0 && b != 0){

        x = a%10;
        y = b%10;

        if(x != y){

            flag = 1;
            break;
        }
        a = a / 10;
        b = b / 10;
    }
    if(flag == 0){

        cout << "Antomorphic Number : " << n << endl;
    }
    else {
        cout << " Not a Antomorphic Number : " << n << endl;
    }
}