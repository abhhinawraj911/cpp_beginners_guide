// Binery Search
#include <iostream>
using namespace std;

int main(){
    
    int n=8;
    int arr[n] = {11,13,42,24,54,66,75,88};
    int ele=241;
    int i=0;
    int flag=0;
    
    for(i=0; i<n; i++){
        
        if(arr[i]==ele){
            
            cout<<"Element found at index: "<<i<<endl;
            cout<<"Element found at position: "<<i+1<<endl;
            
            break;
        }
    }
    if(i>=n){
        cout<<"Element not found";
    }
    
    return 0;
}