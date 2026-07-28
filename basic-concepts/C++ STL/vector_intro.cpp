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

    vec.emplace_back(70); // Adding an element to the end of the vector using emplace_back

    // The emplace_back function constructs an element in place at the end of the vector.
    // The difference between push back and emplace_back is that push_back copies or moves the element into the vector, emplace_back constructs the elenent in place.

    for (int val : vec)
    {
        cout << val << " "; // Iterating through the vector and printing each element
    }
    cout << endl;

    vec.pop_back();
    for (int val : vec)
    {
        cout << val << " "; // Iterating through the vector and printing each element
    }
    cout << endl;

    cout << vec.at(3) << endl;

    vec.erase(vec.begin());
    vec.erase(vec.begin() + 2);

    cout << vec.front() << endl
         << vec.back() << endl;

    for (int val : vec)
    {
        cout << val << " "; // Iterating through the vector and printing each element
    }

    return 0; // Return statement to indicate successful execution
}