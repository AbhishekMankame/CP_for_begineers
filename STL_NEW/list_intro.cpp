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