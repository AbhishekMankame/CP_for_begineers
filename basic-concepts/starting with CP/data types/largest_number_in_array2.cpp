#include<iostream>
//#include<algorithm> // Include algorithm for max function
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int largest = INT_MIN; // Initialize largest with the smallest possible integer
    for(int i = 0; i < n; i++) {
        largest = max(largest, a[i]); // Use max function to find the largest element
        cout << largest << " "; // Output the largest number found so far
    }
    cout << endl; // Print a newline after the output
    cout << "Largest number in the array: " << largest << endl; // Output the final largest number
    return 0;
}