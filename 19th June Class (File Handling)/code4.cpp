// Decimal to Binary
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n = 11;
    int r = 0;
    int sum = 0;
    int z = 1;

    cout << endl;
    cout << "Your Decimal Value : " << n << endl;

    while(n>0){

        r = n % 2;
        sum = sum + r * z;
        z = z * 10;
        n = n / 2;
    }
    cout << "Your Binary Value : " << sum << endl;
}