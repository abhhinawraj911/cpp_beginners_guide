#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i,j;
    int n;
    int arr[100];
    int flag = 0;

    cout << endl;
    cout << "Enter The Number of Elements : ";
    cin >> n;
    cout << endl;

    for(i=0; i<n; i++){
        cout << "Enter you Elements : ";
        cin >> arr[i];
    }
    for(i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << endl;
        cout << "Your Array is Not Sorted" << endl;
        cout << endl;
        cout << "Here's your Sorted Array : ";
        for(i=0; i<n; i++){
            
            cout << arr[i] << " ";
        
        }
        cout << endl;
    }
    else{
        
        cout << endl << "The Given Array is Sorted" << endl;
    
    }
}