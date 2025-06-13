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