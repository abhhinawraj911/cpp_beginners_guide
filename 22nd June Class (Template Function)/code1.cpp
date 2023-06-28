// Template Function
#include<bits/stdc++.h>
using namespace std;

template <class T>
T maximum (T a, T b, T c){

    T max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    return max;
}
 int main(){

    cout << endl << maximum(3, 5, 7) << endl;
    cout << maximum(3.2, 2.5, 4.7) << endl;
    cout << maximum('a', 'z', 's') << endl;
    return 0;

}