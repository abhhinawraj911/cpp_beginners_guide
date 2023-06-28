#include <iostream>
using namespace std;

int main(){
    
    int n=8;
    int arr[n] = {11,13,42,24,54,66,75,88};
    int ele=24;
    int i=0;
    int flag=0;
    
    for(i=0; i<n; i++){
        if(arr[i]==ele){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found at index: "<< i<<endl;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}