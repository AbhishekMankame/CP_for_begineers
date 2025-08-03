// Generating next permutation code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool nextPermutation(vector<int> &nums)
{
    int n = nums.size() - 1, i = n - 2;

    // Step1: Find first decreasing element from end
    while (i >= 0 && nums[i] >= nums[i + 1])
        i++;
    if (i < 0)
        return false; // Already last permutation
}