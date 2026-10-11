// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

// Leetcode 160 - Intersection of Two Linked Lists

// We will solve it using brute force approach

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

// TC: O(m * n), where `m` and `n` are the lengths of the lists.
// SC: O(1)

// Why does it work? We eventually compare every possible pair of nodes. If two nodes point to the same memory address, we have found the intersection.

// Drawback: Repeatedly traversing list B is inefficient.