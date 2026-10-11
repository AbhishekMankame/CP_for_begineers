// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

// Leetcode 160 - Intersection of Two Linked Lists

// We will solve it using brute force approach

// Idea: For every node in list A, traverse list B and check whether any node is the exact same node.

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    }

};

int main() {
    // Create the shared portion: 8 -> 10 -> nullptr

    ListNode* common = new ListNode(8);
    common -> next = new ListNode(10);

    // List A: 3 -> 7 -> 8 -> 10
    ListNode* headA = new ListNode(3);
    headA -> next = new ListNode(7);
    headA -> next -> next = common;

    // List B: 99 -> 8 -> 10
    ListNode* headB = new ListNode(99);
    headB -> next = common;

    Solution sol;
    ListNode* intersection = sol.getIntersectionNode(headA, headB);

    if(intersection != nullptr) {
        cout << "Intersection found at node with value: " << intersection -> val << endl;
    }
    else {
        cout << "No intersection found." << endl;
    }

    // Free memory without deleting shared nodes twice
    delete headA -> next;
    delete headA;
    delete headB;
    delete common -> next;
    delete common;

    return 0;
}

// TC: O(m * n), where `m` and `n` are the lengths of the lists.
// SC: O(1)

// Why does it work? We eventually compare every possible pair of nodes. If two nodes point to the same memory address, we have found the intersection.

// Drawback: Repeatedly traversing list B is inefficient.