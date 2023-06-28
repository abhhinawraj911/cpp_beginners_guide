// Stack //
/*
- Manaage its element by the LIFO(Last-in-First-out) policy
- To use an stack, <stack> header file must be included
- There the type is defined as a class template inside namespace std;

syntex :
        namespace std{
            template 
        }
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st;
    
    st.push(1); // inserting 1
    st.push(2); // inserting 2
    st.push(3); // inserting 3
    
    cout << st.top() << ' '; // 3 is at the top 
    
    st.pop(); // 3 will be deleted 
    
    cout << st.top() << ' '; // 2 is at the top
    
    st.pop(); // 2 will be deleted
    
    st.top() = 77; // Making top that is 1 as 77
    st.push(4); // inserting 4
    st.push(5); // inserting 5

    cout << st.top() << ' '; // 5 is at the top
    
    st.pop(); // 5 will be Deleted
    
    while (!st.empty()){ // checking for the Enpty stack is empty then loop ends \\ Next Ittration Stack is empty 77 is deleted \\ loop end //
        
        cout << st.top() << ' '; // 4 at the top \\ Next ittration \\ 77 at the top
        st.pop(); // 4 will be deleted \\ Next ittration \\ 77 will be deleted 

    }
    cout << endl;
    return 0;
}