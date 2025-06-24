#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;            // Declaration of a  vector of integers
    vec.push_back(10);          // Adding an element to the vector
    vec.push_back(20);          // Adding another element to the vector
    vec.push_back(30);          // Adding yet another element to the vector
    vec.push_back(40);          // Adding a fourth element to the vector
    cout << vec.size() << endl; // Returns the number of elements in the vector
    cout << vec[0] << endl;     // Accessing the first element of the vector
    cout << vec.capacity() << endl;
    ; // Returns the number of elements that can be stored in the vector without reallocating memory

    for (int val : vec)
    {
        cout << val << " "; // Iterating through the vector and printing each element
    }

    return 0; // Return statement to indicate successful execution
}