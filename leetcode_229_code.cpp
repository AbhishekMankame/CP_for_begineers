class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Add a 0 height at the end to flush out the stack at the end of the loop
        heights.push_back(0); 
        
        stack<int> st;  // Stack to hold indices of the histogram
        int maxArea = 0;  // Variable to store the maximum area

        // Iterate through all bars in the histogram
        for (int i = 0; i < heights.size(); ++i) {
            // Pop from the stack if the current height is less than the height of the bar at the top of the stack
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int h = heights[st.top()];  // Get the height of the bar
                st.pop();  // Pop the index from the stack
                
                // Calculate the width of the rectangle
                int width = (st.empty()) ? i : i - st.top() - 1;
                
                // Calculate the area and update maxArea if necessary
                maxArea = max(maxArea, h * width);
            }
            st.push(i);  // Push the current index onto the stack
        }
        
        return maxArea;  // Return the maximum area found
    }
};
