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

void exploreMultiSet() {
    // Everything is same as set
    // only stores duplicate elements --> Multiset will obey the sorted property but not the unique, it can have multiple occurrence of same element

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased
    // erase will delete the all the occurrences

    // {1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 5, 6}
    int cnt = ms.count(1); // prints 4 --> It count all the occurrences of 1

    // to delete only one occurrence of 1
    ms.erase(ms.find(1)); // It will delete the first occurrence of 1 --> Here the iterator points to the address of first 1 and erases that address

    ms.erase(ms.find(1), ms.find(1)+2); // Here it deletes two 1s (deletes first 2 occurrence of 1)

    // rest all function same as set
}

void exploreUnorderedSet() {
    // unordered_set has almost all the properties of set like it stores the unique, but it does not follow the sorted order, it has randomized order
    // In most of the cases the time complexity is O(1), all the operations like insert, erase
    // lower_bound() and upper_bound() function does not work
    // In the very very worst case (like 1 in a million) at that time it might go to O(N) time complexity --> constant
}

void explainMap() {

    // map it works like key-value pair: here the keys will be unique but the values can be same
    // map stores everything with respect of key and values, here the key and value can be of the any data type
    map<int, int> mpp;
    mpp<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2; // On the key 1, we store 2 {1,2} --> It stores internally in the map
    mpp.emplace({3,1}); // {3, 1}
    mpp.insert({2,4}); // {2, 4}
 
    mpp2[{2,3}] = 10; // {{2,3}, 10}

    // Note: map stores unique keys in sorted order --> something similar to set data structure
     for(auto it:mpp) {
        cout << it.first << " " << it.second << endl;
     }

     cout << mpp[1]; // prints 2
     cout << mpp[5]; // as 5 is not present in key, it will print 0 or null

     auto it = mpp.find(3); 
     cout << *(it).second << endl;
     auto it = mpp.find(5); // points to mpp.end() means after the map

     // This is the syntax
     auto it = mpp.lower_bound(2);

     auto it = mpp.upper_bound(3);

     // erase, swap, size, empty, are same as above
}

void explainMultiMap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
    // keys are stored in sorted order
}

void explainUnorderedMap() {
    // same as set and unordered_set difference
    // Here the uniqueness is preserved, but keys are not in sorted order, it will be randomized
    // map works in O(log n), but unordered_map almost works in O(1) time.
    // In very very worst case (like once in a blue moon) it will go to O(N) time
}

void explainExtra() {
    sort(a, a+n); // here 'a' points to the first position (position of the starting iterator) and 'a+n' points to the last iterator (one position after the last element)
    // Here also we will follow [start, end)

    // For sorting vector
    sort(v.begin(), v.end());

    sort(a+2, a+4); // Here only the portion a+2 to till (excluding) a+4 --> means a+2 and a+3 in this case will be sorted

    // Sorting in descending order
    sort(a, a+n, greater<int>); // here greater<int> is an inbuilt-comparator which automatically sorts in the descending order

    pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
}