#include<bits/stdc++.h>
using namespace std;

void exploreList(){
    list<int> ls;
    // List is similar to vector, but here only thing is he we front function as well (So here we can do front operations as well)
    // List is dynamic in nature

    ls.push_back(2); // {2}
    ls.emplace_bacK(4); // {2, 4}
    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(6); // {6, 5, 2, 4}

    // rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void exploreDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back(); // Last element of deque
    dq.front(); // First element of deque

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void exploreStack() {
    // Stack is LIFO --> Last In First Out --> The element which goes last will come out first and elemetn which goes first will come out at last
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 --> s.top() prints the last element which went inside the stack, also called it as 'element on the top of the stack'
    // In stack indexing access is not allowed --> st[2] is invalid

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top(); // 3
    cout << st.size(); // 4

    cout << st.empty(); // False as the stack is not empty

    stack<int> st1, st2;
    st1.swap(st2);

    // Complexity: In stack, push, pop and top operations all will take O(1) operations (constant time)
}

void exploreQueue(){
    // Queue is FIFO --> First In First Out --> The element which goes in First comes out First
    queue<it> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back()+5;
    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size, swap, empty is same as stack
}

void explain PQ() {
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    
    cout << pq.top(); // prints 10
    
    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size, swap, empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}