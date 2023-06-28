#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i;
    int n;
    int arr[20];
    cout << endl;
    cout << "Enter The Number of Elements : ";
    cin >> n;
    cout << endl;

    for(i=0; i<n; i++){
        cout << "Enter you Element : ";
        cin >> arr[i];
    }

    int l,r,temp;
    int half = n/2;
    l = half;
    r = n-1;

    while (l<r)
    {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    
    
    for(i=0; i<n; i++){
        cout << "Your New Elements are : ";
        cout << arr[i];
        cout << endl;
    }
}