#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;

    unordered_map<int, int> k;
    for(int i = 0; i < n; i++) {
        int y;
        cin >> y;
        k[y]++;
    }
    int maxC = 0, minC = INT_MAX;
    int minE = -1, maxE = -1;

    for(auto const& i : k) {
        int number = i.first;
        int count = i.second;

        // Track minimum frequency
        if(count < minC) {
            minC = count;
            minE = number;
        } else if(count == minC) {
            // Optional tie-breaker: choose the smaller element value
            if(number < minE) minE = number;
        }

        // Track maximum frequency
        if(count > maxC) {
            maxC = count;
            maxE = number;
        }
        else if(count == maxC) {
            // Optional tie-breaker: choose the smaller element value
            if(number < maxE) maxE = number;
        }
    }
    cout << "Element with maximum count is: " << maxE << " with count: " << maxC << endl;
    cout << "Element with minimum count is: " << minE << " with count: " << minC << endl;

    return 0;
}