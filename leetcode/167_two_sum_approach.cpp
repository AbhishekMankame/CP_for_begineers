class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size() - 1; // st starts from 0, end starts from the last element
        while (st < end) {
            int sum = numbers[st] + numbers[end]; // sum of the current elements
            if (sum == target) {
                return {st + 1, end + 1}; // return 1-based indices
            } else if (sum < target) {
                st++; // increase the starting index if the sum is less than the target
            } else {
                end--; // decrease the ending index if the sum is greater than the target
            }
        }

        return {-1, -1}; // If no valid pair is found
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
