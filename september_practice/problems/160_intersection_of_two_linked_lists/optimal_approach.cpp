// Optimal Approach

/*
Node: This is the approach you should aim to understand and remember for interviews.

### The core intuition

Suppose list A has length `m` and list B has length `n`. Their lengths before the intersection might differ.

If we start one pointer at each head, the pointers won't necessarily reach the intersection at the same time.

Trick: When a pointer reaches the end of its list, redirect it to the head of the other list.
- Pointer `a`: traverse A, then B.
- Pointer `b`: traverse B, then A.

Both pointers travel exactly m + n nodes if there is no intersection, so they align at the intersection if one exists.

*/

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b) {
            a = (a == nullptr) ? headB : a -> next;
            b = (b == nullptr) ? headA : b -> next;
        }
        return a;
    }
};

/*
### Why does this work?
Let the shared portion have length `c`. The unique portions have lengths `x` and `y`.

The pointers traverse: 
- Pointer a : x + c + y
- Pointer b : y + c + x

Both travel the same total distance, x + y + c. Therefore, they reach the shared portion at the same time.

If the list do not intersect, both pointers eventually become `nullptr` together. The loop ends and returns `nullptr`.

Complexity:
- Time: O(m + n)
- Space: O(1)

*/