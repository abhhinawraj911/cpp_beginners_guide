// Exception Handing or Error Handing
/*
Try key Word : Throw and Catch
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << endl << "Program starts\n";

    int a,b;
    cout << "Enter 2 Values : " << endl;
    cin >> a >> b;
    try
    {
        if(b==0){
            throw "Divide by 0 is not Possible"; // IF Value is a String
            cout << a/b << endl;
        }
        else if(a==0){
            throw 0; // IF Value is a Integer
            cout << a/b << endl;
        }
    }
    catch(const char* ch)
    {
        cout << endl << "Error Occured \n" << ch; // Executed if String value is Found
    }
    catch(int i)
    {
        cout << endl << "Error Occured \n" << i; // Executed if integer value is Found
    }
    catch(...){
        cout << "Error Occured\n"; // Default value if the condition is not satified then only Executed
    }

    cout << endl << "Program Ends" << endl;
    
}