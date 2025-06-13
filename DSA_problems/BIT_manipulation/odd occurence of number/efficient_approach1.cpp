/* Checking whether the given number occurs odd number of times or not*/
// Using hashmap approach

#include<iostream>
#include<unordered_map>
#define ll long long
#define um unordered_map<int, int>
using namespace std;

int oddOccurence(int arr[], int n) {
    um freqMap;
    for(int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }
    for(auto it : freqMap) {
        if(it.second % 2 != 0) {
            return it.first; // Return the number that occurs an odd number of times
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << oddOccurence(arr, n) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) // The space complexity is O(n) due to the hashmap used to store the frequency of each number.
// Explanation: The code uses an unordered map to count the frequency of each number in the array. After populating the map, it iterates through the map to find and return the number that occurs an odd number of times. This approach is efficient and works well for large inputs.
// Note: This approach is efficient for large inputs, as it has a linear time complexity. The use of a hashmap allows for quick lookups and insertions, making it suitable for problems involving frequency counts.