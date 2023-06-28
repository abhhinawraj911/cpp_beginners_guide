// Priority Queue
/*
- A queue from which elements are read according to their priority.
- To use an priority queue <queue> header file must be included
- there the type is defined as a class template inside namespace std

    syntex:
            namespace std{
                template <;typename T, typename container = vector<T>,
                typename compare = less<typename container :: value_type>
            }
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<float> q;

    q.push(66.6);
    q.push(22.2);
    q.push(44.4);

    cout << q.top() << " ";
    q.pop();

    cout << q.top() << endl;
    q.pop();

    q.push(11.1);
    q.push(55.5);
    q.push(33.3);

    q.pop();

    while (!q.empty()){
        
        cout << q.top() << ' ';
        q.pop();
    
    }
    cout << endl;
    
    return 0;
}