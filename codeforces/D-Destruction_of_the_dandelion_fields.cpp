// Codeforces contest 2148-D
// Destruction of the Dandelion Fields
// time limit per test: 2 second
// memory limit per test: 256 megabytes

/*
Farmer John has a lawnmower, initially turned off. He also has n fields, with the i-th field having ai dandelions. He will visit all the fields in any order he wants, and each field exactly once.

FJ's lawnmower seems to have a mind of its own. Right before visiting a field, it checks if the field has an even or odd number of dandelions. If it has an odd number, then the lawnmower toggles its state(if it is off, it turns on; if it is on, it turns off). Then, if the lawnmower is on, it will cut all dandelions in that field. Otherwise, if the lawnmower is off, then FJ will simply visit the field and cut no dandelions.

If FJ visits the n fields in optimal order, what is the maximum total number of dandelions he can cut?

Input:
The first line contains an integer t (1 <=t <= 10^4) - the number of test cases.
The first line contains an integer n (1 <= n <= 2*10^5) - the number of fields.
The following line contains n space-seperated integers a1, a2, a3, ..., an (1 <= ai <= 10^9) - the number of dandelions in each field.
It is guaranteed that the sum of n over all test cases does not exceed 2*10^5

Output:
For each test case, output an integer on a new line: maximum dandelions FJ can cut if he visits all n fields in optimal order.

Example:
Input:
3
3
2 4 6

4
4 2 1 6

4
1000000000 999999999 1000000000 999999999

Output
0
13
2999999999

Problem tags: constructive algorithms, greedy, sortings, *1000

*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> field(n);
    for(int i=0;i<n;i++){
        cin >> fields[i];
    }

    vector<int> evenFields, oddFields;

    // Separate even and odd fields
    for(int dandelions:fields){
        if(dandelions%2==0) evenFields.push_back(dandelions);
        else oddFields.push_back(dandelions);
    }

    long long int total=0;

    // If we have at least one odd field, we can plan to turn mower ON
    if(!oddFields.empty()){
        // All even fields can be cut when mower is ON
        for(int x:evenFields) total += x;
    }

    // Sort odd field in descending order
    sort(oddFields.rbegin(), oddFields.rend());

    // We can only cut rougly half of them (the onew when mower is ON)
    int count = (oddFields.size()+1)/2;
    for(int i=0;i<count;i++){
        total+=oddFields[i];
    }
    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

// Time Complexity: O(N log N)
// Space Complexity: O(N)