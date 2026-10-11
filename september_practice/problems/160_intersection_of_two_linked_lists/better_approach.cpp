// Better approach

// Idea: Store all nodes of List A in a hash set. Then traverse list B and return the first node that already exists in the set.

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> seen;

        ListNode* curr = headA;

        while(curr != nullptr) {
            seen.insert(curr);
            curr = curr -> next;
        }
        curr = headB;

        while(curr != nullptr) {
            if(seen.count(curr)) {
                return curr;
            }
            curr = curr -> next;
        }

        return nullptr;
    }
};

// TC: O(m + n) on average.
// SC: O(m) for the hash set.

// Why is it better? Each node is visited only a constant number of times on average, rather than repeatedly comparing every pair.

// Drawback: We use extra memory to store the nodes.