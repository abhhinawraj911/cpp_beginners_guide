#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[20];
    int i, len;
    int a = 0;
    int flag = 0;
    
    cout<<endl;
    cout << "Enter a string: "; 
    cin >> s;
    
    len = strlen(s);
    
    for(i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        cout << s << " Is not a palindrome" << endl; 
    }    
    else {
        cout << s << " Is a palindrome" << endl; 
    }
    return 0;
}