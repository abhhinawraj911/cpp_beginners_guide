// Dequw
/*
- Manage its elements with a dynamic array and provides random access
- The dynamic array is open at both ends.
- to use a Deque <deque> header file must be included
- there the type is defined as a class template inside namespace std.

 syntex: 
        namespace std {
            template <typename T, typenameAllocator = allocator<T>>
            class deque;
        }
- T is the Type of element of deque.
- the Default memory module 
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    
    deque<string> coll;
    coll.assign (3, string("string"));
    coll.push_back ("last string");
    coll.push_front ("first string");

    copy (coll.cbegin(), coll.cend(),ostream_iterator<string>(cout,"\n"));
    
    cout << endl;
    coll.pop_front();
    coll.pop_back();
    
    for (unsigned i=1; i<coll.size(); ++i){
        
        coll[i] = "another " + coll[i];
        coll.resize (4, "resized string");
        copy (coll.cbegin(), coll.cend(),ostream_iterator<string>(cout,"\n"));
    }
    return 0;
}