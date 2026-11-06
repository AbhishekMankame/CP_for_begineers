/*
Given an array "nums" of size "N" - find the total number of pairs (i, j) (where i < j), such that nums[i] + nums[j] == target

Input: [2, 2, 3, 3, 5]

Output: 4

Is the array sorted or not? - Array is not necessarily sorted

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arraySize, targetSum;
    cin >> arraySize >> targetSum;

    vector<int> numbers;

    // Taking array input
    for(int i = 0; i < arraySize; i++) {
        int currentNumber;
        cin >> currentNumber;
        numbers.push_back(currentNumber);
    }

    int pairCount = 0;

    // Stores the frequency of previously visited numbers
    unordered_map<int, int> frequencyMap;

    for(int i = 0; i < arraySize; i++) {
        // Find the number needed to make the target sum
        int complement = targetSum - numbers[i];

        // Check whether the complement appeared earlier

        // We can also write as 
        // if(frequencyMap.count(complement)) {...}
        if(frequencyMap.find(complement) != frequencyMap.end()) {
            pairCount += frequencyMap[complement];
        }

        // Store the current number's frequency
        frequencyMap[numbers[i]]++;
    }
    cout << pairCount << endl;

    return 0;
}

/*
Time Complexity: TC = O(n) + O(n) = O(n)
Note: In the worst case, individual hash map operations can take O(n), so the theoretical worst-case time complexity is O(n^2).

Space Complexity: SC = O(n) + O(n) + O(1) = O(n)
*/