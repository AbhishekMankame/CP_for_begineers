// Not so optimal approach

#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    int left = 0, right = n - 1;
    sort(book.begin(), book.end());
    while(left < right) {
        int sum = book[left] + book[right];
        if(sum == target) return "YES";
        else if(sum < target) left++;
        else right--;
    }
    return "NO";
}

// TC: O(N) + O(N log N)
// SC: O(1) Note: We are changing the original array