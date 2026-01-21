// Find p95th element of continuous stream of integer
/*
The 95th percentile (p95) of a dataset is the value such that 95% of the data points are less than or equal to it, and only 5% of the data points are greater than it, after the data has been sorted in ascending order.
In practical terms, if you sort akk the values and look at the position corresponding to 95% of the total count, the value at that position is the p95.
This metric is commonly used to describe the "typical worst-case" behavior of a system, because it represents how large the values are for almost all observations while ignoring rare extreme outliers.

One-liner: p95 is the value below which 95% of the observed data falls.

Key Idea: Maintain the 95th percentile dynamically using two heaps:
- Max-heap (low) -> holds the smallest 95% of elements
- Min-heap (high) -> holds the largest 5% of elements
- The tops of low is the p95 value

Why this works: By keeping heap sizes in a 95:5 ratio, the boundary between them is exactly the 95th percentile.

Algorithm:
For each incoming number x:
1. Insert into 'low' if 'x<=low.top()', else into 'high' 
2. Rebalance heaps so: size(low) = ceil(0.95*total_elements)
3. p95 = low.top()

Time & Space
- Insertion: O(log n)
- Query p95: O(1)
- Space: O(n) (optimal for exact percentile)
*/

#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

class P95Stream {
    private:
        priority_queue<int> low; // max-heap (95%)
        priority_queue<int, vector<int>, greater<int>> high; // min-heap (5%)
        int count=0;

        void rebalance() {
            int targetLowSize = ceil(0.95*count);
            while((int)low.size()>targetLowSize){
                high.push(low.top());
                low.pop();
            }
            while((int)low.size()<targetLowSize && !high.empty()){
                low.push(high.top());
                high.pop();
            }
        }

        public:
            void add(int x) {
                count++;
                if(low.empty() || x<=low.top())
                    low.push(x);
                else
                    high.push(x);

                    rebalance();
            }
            int p95() const {
                if(low.empty()) throw runtime_error("No elements yet");
                return low.top();
            }
}
