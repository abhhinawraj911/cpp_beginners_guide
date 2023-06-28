#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){

    // int result = pow(a,n);

    // cout << endl << a << " Power " << n << " = " << result << endl;

    if(n == 0){
        return 1;
    }
    else{
        return a * pow(a,n-1);
    }

}

int main(){

    int a,n;
    cout << endl << "Enter your first Value : ";
    cin >> a;
    cout << endl << "Enter Your Power Value : ";
    cin >> n;

    power(a,n);

    cout << endl << a << " Power " << n << " = " << power(a,n) << endl;

}