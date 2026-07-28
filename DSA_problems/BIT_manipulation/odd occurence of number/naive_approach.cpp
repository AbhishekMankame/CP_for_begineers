/* Checking whether the given number occurs odd number of times or not*/

#include<iostream>
using namespace std;

int oddOccurence(int arr[], int n){
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i]==arr[j]){
                count ++;
            }
        }
        if(count%2!=0){
            return arr[i];
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << oddOccurence(arr,n) << endl;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Explanation: The code iterates through each element of the array and counts its occurrences. If the count is odd, it returns that element. This approach is straightforward but inefficient for large arrays due to its O(n^2) time complexity.
// Note: This approach is not optimal for large inputs, as it has a quadratic time complexity. For better performance, consider using a hashmap or bit manipulation techniques to achieve linear time complexity.