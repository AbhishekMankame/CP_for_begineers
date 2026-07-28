#include<bits/stdc++.h>
using namespace std;

void vector(vector<int> v){
    vector<int> v={10,20,12,23};

    // Deletion in vector --> We can use erase function
    v.erase(v.begin()+1); // Here it will delete the element 20, so the new vector will be {10,12,23}

    // If we want to delete the multiple elements
    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} --> Here it will follow [start,end), here the end address is after the element

    // Insert function

    vector<int> v(2,100) // {100, 100}
    v.insert(v.begin(),300); // {300, 100, 100}
    v.insert(v.begin()+1,2,10); // {300, 10, 10, 100, 100}

    // copying vector
    vector<int> copy(2,50); // {50, 50}
    v.insert(v.begin(), copy.begin(),copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2 --> It will give how many elements are there in the vector

    // {10, 20}
    v.pop_back(); // {10} --> pops out the last element

    // v1 --> {10, 20}
    // v2 --> {30, 40}
    v1.swap(v2); // v1 --> {30, 40}, v2 --> {10, 20} , here it swaps the vector

    v1.clear(); // erases the entire vector

    cout << v.empty(); // checks whether the vector is empty or not, here it returns the boolean value
}    