// Here we will be using built in next permutation function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    // sort(nums.begin(), nums.end()); // important step

    do
    {
        for (int num : nums)
        {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}

/*Behind the scene: How next_permutation() works
It generates the next permutation in lexicographic order using this logic:
1. Find the first index `i` from the end such that `nums[i] < nums[i+1]`
2. Find the smallest element after index `i` that is greater that `nums[i]` (say at index `j`), and swap them.
3. Reverse the subarray from `i+1` to the end.

*/