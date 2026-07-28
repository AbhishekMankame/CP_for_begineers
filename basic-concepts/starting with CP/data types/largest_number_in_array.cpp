#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Input a number
    int a[n]; // Declare an array of size n
    for(int i = 0; i < n; i++) {
        cin >> a[i]; // Input elements into the array
    }
    int largest = a[0]; // Initialize largest with the first element
    for(int i = 1; i < n; i++) {
        if(a[i] > largest) { // Compare each element with largest
            largest = a[i]; // Update largest if current element is greater
        }
    }
    cout << largest << endl; // Output the largest number
    return 0; // Return 0 to indicate successful execution
}