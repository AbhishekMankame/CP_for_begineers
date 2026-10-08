// Count of distinct elements

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int vis[100] = {false};
    for(int i = 0; i < n; i++){
        if(vis[arr[i]] == false) {
            count++;
            vis[arr[i]] = true;
        }
    }
    cout << count << endl;
    return 0;
}

/*
Time Complexity:
Here the `for loop` runs exactly `n` times.
Inside the loop: vis[arr[i]] is an array access, which takes O(1) time.

So: n * O(1) = O(n)

Space Complexity:
Here we have: int vis[100] = {false};
The size is fixed at 100, regardless of n.
Therefore: O(1)

Note: If instead we had: int vis[k]; 
where `k` grows with the input/range of values, then the space complexity would be O(k).

*/