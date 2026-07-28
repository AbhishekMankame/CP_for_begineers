/*

What is Counting Sort? 

Counting sort is a non-comparison-based sorting algorithm that works well when:
- The elements are integers (or can be mapped to integers).
- The range of input values (max - min) is not too large compared to the number of elements.
It counts the number of occurrences of each element and then reconstructs the sorted array.

*/

#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr){
    if(arr.empty()) return;

    // Find the minimum and maximum elements
    int minVal = *min_element(arr.begin(),arr.end());
    int maxVal = *max_element(arr.begin(),arr.end());
    int range = maxVal - minVal + 1;

    // Create a count array
    vector<int> count(range,0);

    // Count occurrences of each value
    for(int num:arr){
        count[num-minVal]++;
    }

    // Overwrite arr with sorted values
    int index=0;
    for(int i=0;i<range;i++){
        while(count[i]-- > 0) {
            arr[index++] = i + minVal;
        }
    }
}

int main() {
    vector<int> arr = {4,2,2,8,3,3,1};
    countingSort(arr);

    cout << "Sorted array: ";
    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
Time Complexity: O(n + k), where
    - n = number of elements
    - k = range of input values (max - min + 1)

Space Complexity: O(k)

*/