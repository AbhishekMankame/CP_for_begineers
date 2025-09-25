// Floyd's Tortoise and Hare (Cycle Detection) - Optimal (O(n))

// Idea - Treat the array as a linked list (index->value)
// Use cycle detection to find the duplicate.

/*
Visualization:
- Each index points to nums[i]
- Duplicate cause a cycle.

Steps:
1. Find intersection using fast and slow pointers.
2. Reset one pointer to start
3. Move both at same speed to find entrance (duplicate)
*/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums){
    int slow=nums[0];
    int fast=nums[0];

    // Phase 1: Find intersection point
    do {
        slow=nums[slow];
        fast=nums[nums[fast]];
    } while(slow!=fast);

    // Phase 2: Find entrance to cycle (duplicate)
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }

    return slow;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Most optimal - constant space and linear time
