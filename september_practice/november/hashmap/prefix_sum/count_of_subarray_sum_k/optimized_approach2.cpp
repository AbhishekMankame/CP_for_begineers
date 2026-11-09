#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int arr[] = {2, 3, 3, 5, 2, 2, 3, 2, 2, 1};
    int k = 8;

    unordered_map<int, int> mp;

    int sum = 0;
    int count = 0;

    mp[0] = 1;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        int rem = sum - k;

        if(mp.find(rem) != mp.end()) {
            count += mp[rem];
        }
        mp[sum]++;
    }
    cout << count << endl;
    return 0;
}

/*
Time Complexity: O(n)
- We traverse the array once: O(n)
- Hash map insertion: O(1)
- Hash map lookup: O(1)

Therefore, total average time complexity is O(n).

Space Complexity: O(n)
- In the worst case, the map can store up to n + 1 distinct prefix sums.
- Hence, auxiliary space is O(n).

*/