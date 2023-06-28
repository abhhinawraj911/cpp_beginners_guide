// Binary to Decimal Value
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 1011;
    int r = 0;
    int sum = 0;
    int i = 0;

    cout << endl;
    cout << "Binary Value is: " << n << endl;

    while(n>0){

        r = n%10;
        sum = sum + r * pow(2,i);
        i++;
        n = n/10;
    }
    cout << "Decimal Value is : " << sum << endl;
    
}