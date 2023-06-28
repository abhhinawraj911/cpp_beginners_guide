#include<iostream>
using namespace std;

int main(){
    int r=3, c=3, i, j;

    int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int m2[3][3] = {{7,8,9},{0,1,2},{5,4,3}};
    int sum[3][3];

    
    for(i = 0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }

    for(i = 0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<sum[i][j]<<" ";

            if(j==c-1)
            {
                cout<<endl;
            }
        }
    }
}