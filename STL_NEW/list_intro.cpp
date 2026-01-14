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
    // Priority Queue - As the name recommends "Priority" the guy or element who has the largest value stays at the top
    // Priority queue is not a linear data structure, inside of it "tree" data structure is maintained

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

    // In Priority queue, push and pop happens in O(log n) and top happens in O(1) time
}

void exploreSet() {

    // set stores everything in the sorted order and stores unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector can be used also, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns an iterator which points to 3 (address)

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // If the element is not in the set, it will always return set.end(), it means the iterator which points to right after the end

    // {1, 4, 5}
    st.erase(5); // erase 5 // takes logarithmic time
    // Here in st.erase(5), it deleted the 5 and maintained the sorted order

    int count = st.count(1); // If 1 exists then it will have only 1 occurrence, as set will only contains unique elements, if the element does not exists, it will return 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last) --> it will delete everything between 2 and 4 including 2

    // lower_bound() and upper_bound() function works in the same way as in vector does

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    // Note: In Set everything happens in logarithmic complexity --> O(log n) (insert, erase etc will happen in O(log n))
}