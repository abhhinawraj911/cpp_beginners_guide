#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout << endl;
    cout << "Enter your Number : ";
    cin >> n;
    int num = n;
    int r = 0;
    int sum = 0;

    while(num>0){

        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    
    if (sum == n){
        
        cout << endl;
        cout << "Is a palindrome : " << n << endl;

    } else {

        cout << endl;
        cout << "Is Not a palindrome : " << n << endl;

    }

    return 0;
}