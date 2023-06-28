#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i;
    int n;
    int arr[20];
    int flag = 0;
    cout << endl;
    cout << "Enter The Number of Elements : ";
    cin >> n;
    cout << endl;

    for(i=0; i<n; i++){
        cout << "Enter you Element : ";
        cin >> arr[i];
    }

    for(i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << endl;
        cout << "Sorted" << endl;
    }
    else{
        cout << endl;
        cout << "Not Sorted" << endl;
    }
}