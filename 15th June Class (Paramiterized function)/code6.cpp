/*
- String Palindrome
- Given Sting is a Strong password or Not
    1. Upper Case
    2. Lower Case
    3. Special Symbols
    4. Number
    5. Minimum 8 Caracters
- Reverse String
- Count String
*/

// String Palindrome 
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char st[20];
    int i, len;
    int a = 0;
    
    cout<<endl;
    cout << "Enter a string: "; 
    cin >> st;
    
    len = strlen(st);
    
    for(i=0;i < len ;i++){
        //cout<<endl<<i<<st[i]<<endl<<len<<st[len-i-1]<<endl<<endl<<endl;
        if(st[i] != st[len-i-1]){
            //cout<<endl<<i<<st[i]<<endl<<len<<st[len-i-1]<<endl<<endl<<st[i]<<endl;
            a = 1;
            //cout<<a<<endl;
            break;
        }
    }
    
    if (a) {
        cout << st << " Is not a palindrome" << endl; 
    }    
    else {
        cout << st << " Is a palindrome" << endl; 
    }
    return 0;
}