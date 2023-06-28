// Memory Management
/*
- It can be defined as the process to manage a computer's memory.
- It is required to avoid wastage of memory and to make sure allocation take place efficiently.

// Memory allocation and deallocation will be done manually in C++ but it is auto in java and python.
for that we use two operator :
                                1. New Operator.
                                2. Delete Operator.
// New Operator :
                - It is Used for dynamic memory allocation.
                - The new perator is responsible for the creation of the object.

    Syntax for arrays:
                        Pointer variable = new dataType(int/char/float);

// Delete Operator :
                - In C++ it is used for deallocation of memory oe for releasing of memory space.
                - Once the memory is no longer required then we have to deallocate 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Creation of the Pointer Variable 
    int *ptr1;
    int *ptr2;
    int *ptr3;

    int avg;

    // Allocation of the Memory
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout << endl;
    cout << " Enter the Fist Value : ";
    cin >> *ptr1;
    cout << endl << "Enter the Second Value : ";
    cin >> *ptr2;
    cout << endl << "Enter the Third value : ";
    cin >> *ptr3;

    avg = (*ptr1 + *ptr2 + *ptr3)/3;

    cout << "Average Value : " << avg << endl;

    // Deallocation of the Memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}