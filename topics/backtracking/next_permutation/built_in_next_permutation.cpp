// Here we will be using built in next permutation function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    sort(nums.begin(), nums.end()); // important step

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