// https://leetcode.com/problems/min-stack/description/

// Leetcode 155 - Min Stack

#include<bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int>s,st;
public:
    void push(int val){
        s.push(val);
        if(st.empty() || val<=st.top()) st.push(val);
    }

    void pop(){
        if(s.top()==st.top()) st.pop();
        s.pop();
    }

    int top() return s.empty()?-1:s.top();

    int getMin() return st.empty()?-1:st.top();
}

/*
Complexity Analysis:

Time Complexity:
Each operation runs in O(1) time:
- push(val) -> O(1)
    - One push to 's'
    - At most one push to 'st'

- pop() -> O(1)
    - One pop from 's'
    - Possibly one pop from 'st'

- top() -> O(1)
    - Just returns top of stack

- getMin() -> O(1)
    - Returns top of min stack

Overall: All operations are constant time -> O(1)

Space Complexity:
- We are using two stacks
    - 's' -> stores all elements -> O(n)
    - 'st' -> stores minimum elements -> worst case also O(n)
    (eg: strictly decreasing sequence like 5,4,3,2,1)

Overall space: O(n)

*/