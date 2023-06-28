#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int ele){
    
    int l=0;
    int r=n-1;
    
    while(l<=r){
        
        int mid= ((l+r)/2);
        
        if(ele==arr[mid]){
            return mid;
        }
        else if( ele > arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}

int main(){
    
    int n=10;
    int arr[n]={5,9,12,17,18,24,28,30,49,54};
    
    cout<<"element found at index: "<<binarySearch(arr, n, 28);
    
    return 0;
}