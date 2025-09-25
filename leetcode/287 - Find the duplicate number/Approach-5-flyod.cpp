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