// File Handling
/*
C++ provides the Following classes to perform output and input of characters to/from files:

Open a file :
            In order to open a file with a stream object we use its member function open :
             syntex:
                    open (filename, mode);
        Where filename is a string representaing the name of the file to be opened and mode is an optional parameter.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ofstream myfile;
    myfile.open("D:/C++/File hading data/text.txt");
    myfile << "Writing on a file Opening and Closing a File in C in C++ Pdf File handling operation is a very important part of programming in C++." << endl;
    myfile <<  "In most programs, we need to read from or write to files. In C++, we can use the file handling library to perform" << endl;
    myfile <<  "file operations. This library provides several functions that allow us to open, read, write, and close files." << endl;
    myfile <<  "In this article, we will see how to open and close a file in C++." << endl;
    myfile <<  "File handling refers to the process of reading from or writing to files." << endl;
    myfile <<  "In C++, we can use the file handling library to perform file operations." << endl;
    myfile <<  "This library provides several functions that allow us to open, read, write, and close files." << endl;
    myfile <<  "We can use file handling to perform tasks such as storing data, retrieving data, and modifying data in files" << endl;
    cout << endl;
    cout << "File Create Successfully";
    cout << endl;

    myfile.close();

    return 0;

}