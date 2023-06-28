// Binery Search
#include<iostream>
using namespace std;

/*
void arrData(int arr[], int n, int j){

    for(int i = 0; i < n; i++){
        arr[i] = j;
        j++;
    }
    cout << "Your Array is : ";
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "\nYour Array Is Ready" << endl;
}
*/

int binerySearch(int arr[], int n, int x){
    
    int r = n - 1;
    int l = 0;

    while (l <= r){
        
        int m = (l + r) / 2;

        if(arr[m] == x){
            return m;
        }
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1;
}


int main(){

    int n, arr[100],j=1, x;

    cout << endl << "Enter your Array Size : ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        arr[i] = j;
        j++;
    }
    cout << "Your Array is : ";
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "\nYour Array Is Ready" << endl;

    cout << endl << "What you are Searching For : ";
    cin >> x;
    
    cout << endl << "Your Element is there in : " << binerySearch(arr, n, x) << " Index" << endl;

    cout << endl;
}