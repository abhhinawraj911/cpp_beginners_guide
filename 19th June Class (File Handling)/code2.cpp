// File handing
/*
Writeing on a File
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ofstream myfile("D:/C++/File hading data/text1.txt");

    //ofstream myfile(text1.txt);
    if(myfile.is_open()){

        myfile << "This is a new Line" << endl;
        myfile << "This is an another New Line" << endl;

        cout << endl;
        cout << "written on the File";
        cout << endl;

        myfile.close();

    }

    return 0;

}