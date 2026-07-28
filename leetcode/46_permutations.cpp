// Leetcode 46 - Permutations
// Medium

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:
Input: nums = [1]
Output: [[1]]


Constraints:
- 1<=nums.length<=6
- -10<=nums[i]<=10
- All the integers of nums are unique

Topics: Array, Backtracking


*/


class Solution {
public:
    void permuteH(vector<int>& nums, int pos, vector<vector<int>>& result){
        if(pos==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++){
            swap(nums[pos],nums[i]);
            permuteH(nums,pos+1,result);
            swap(nums[pos],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteH(nums,0,result);

        return result;
    }
};