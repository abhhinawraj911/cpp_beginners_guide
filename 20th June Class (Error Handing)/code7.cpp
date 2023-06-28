#include<bits/stdc++.h>
using namespace std;

int main(){

    int i;
    int len;
    char s[20];

    cout << endl << "Enter Your Word : ";
    cin >> s;

    len = strlen(s);

    for(i=0;i<len;i++){

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){

            s[i] = '$';
        }
    }
    cout << endl << "Your Updated String is : " << s << endl;
}