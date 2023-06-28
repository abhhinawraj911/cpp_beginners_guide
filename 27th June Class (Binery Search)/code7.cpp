#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 10;
    int arr[n] = {1,4,0,3,0,2,7,0,1,0};
    int flag = 0;
    int count = 0;
    int m = 0;
    int o = 0;
    int p,q = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    
    m = count;
    int arr1[m];
    cout << "m is : " << m << endl;
    o = n - count;
    int arr2[o];
    cout << "o is : " << o << endl;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            arr1[p] = arr[i];
            p++;
        }
        else{
            arr2[q] == arr[i];
            q++;
        }
    }

    cout << endl << "New Array : ";

    for(int i = 0;i<m;i++){
        cout << arr1[i] << " ";
    }
    for(int i=0;i<o;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}