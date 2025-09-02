## Sliding Window - What Is It?
Imagine a window of size `k` sliding over an array or string - instead of recalculating everything for each new window position, you <b>update the result incremetally</b> as the window moves. This helps optimize from O(n*k) to O(n) time complexity for many problems.

### Basic Template for Sliding Window (Fixed Size)

<pre>
for(int i=0;i less than n;i++){
    // Add new element (right end of window)
    // Remove old element (left end of window, when window size greater than k)
    // Process current window
}

</pre>