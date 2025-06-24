#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;        // Declaration of a  vector of integers
    vec.push_back(10);      // Adding an element to the vector
    vec.size();             // Returns the number of elements in the vector
    cout << vec[0] << endl; // Accessing the first element of the vector
}