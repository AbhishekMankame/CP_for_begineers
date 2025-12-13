// Combination Sum II
// Easy

/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
Each number in candidates may only be used once in the combination.
Note: The solution set must not contain duplicate combinations.

Example 1:
Input: candidates = [10,1,2,7,6,1,5], target=8
Output: [[1,1,6],[1,2,5],[1,7],[,6]]

Example 2:
Input: candidates = [2,5,2,1,2], target=5
Output:[[1,2,2],[5]]

Constraints:
- 1<=candidates.length<=100
- 1<=candidates[i]<=30
- 1<=target<=30

Topics: Array, Backtracking

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> path;
vector<vector<int>>res;

void dfs(vector<int> &a, int target, int start){
    if(target==0){
        res.push_back(path);
        return;
    }
    for(int i=start;i<a.size();i++){
        if(i>start and a[i]==a[i-1]) continue;
        if(a[i]>target) break;
        path.push_back(a[i]);
        dfs(a,target-a[i],i+1);
        path.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
    sort(candidates.begin(),candidates.end());
    dfs(candidates,target,0);
    return dfs;
}