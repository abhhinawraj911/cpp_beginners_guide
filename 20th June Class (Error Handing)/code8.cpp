#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[20], int arr2[20], int updtarr[20], int n1, int n2){

    int i,j,k = 0;

    while(i<n1){
        updtarr[k++] = arr1[i++];
    }

    while (j<n2){
        updtarr[k++] = arr2[j++];
    }
    sort(updtarr, updtarr+n1+n2);
}

int main(){

    int i,j;
    int n,m;
    int arr1[20],arr2[20],updtarr[20];

    // 1st Array Input
    cout << endl << "Enter your 1st Array Length : ";
    cin >> n;
    for(i=0;i<n;i++){

        cout << "Enter your Array Element : ";
        cin >> arr1[i];

    }

    // 2nd Array Input
    cout << "Enter your 2st Array Length : ";
    cin >> m;
    for(i=0;i<m;i++){

        cout << endl << "Enter your Array Element : ";
        cin >> arr1[i];

    }

    int n1, n2;

    n1 = sizeof(arr1) / sizeof(arr1[0]);
    n2 = sizeof(arr2) / sizeof(arr2[0]);

    updtarr[n1+n2];
    mergeArray(arr1, arr2, n1, n2, updtarr);

    cout << "Your Updated And Sorted Array : ";
    for(i=0;i<n1+n2;i++){
        cout << updtarr[i] << " ";

    }

}