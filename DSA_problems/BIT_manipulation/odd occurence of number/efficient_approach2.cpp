/*Efficient approach 2 -  Using XOR */

#include<iostream>
using namespace std;

int oddCount(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << oddCount(arr, n) << endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Explanation: The code uses the XOR operation to find the number that occurs an odd number of times in the array. The property of XOR is that it cancels out numbers that appear an even number of times, leaving only the number that appears an odd number of times.
// Note: This approach is efficient for large inputs, as it has a linear time complexity and uses constant space. The XOR operation is particularly useful in problems involving finding unique elements pr odd occurrences, as it provides a simple and effective solution without the need for additiional data structures.