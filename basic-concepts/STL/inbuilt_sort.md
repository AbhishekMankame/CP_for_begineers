# STL Inbuilt Sort
## Can we implement STL's inbuilt `sort()` from scratch?
✅ Yes, absolutely. <br>
The C++ STL `std::sort()` is a hybrid algorithm - usually a variation of:
<pre> Introsort = QuickSort + HeapSort + InsertionSort </pre>

## Why a hybrid?
- QuickSort is fast on average but can change degrade to O(n^2) in worst case.
- HeapSort ensures worst-case `O(n log n)` performance.
- InsertionSort is faster on tiny subarrays (because of less overhead).
<br>So STL's `sort()` intelligently switches between them:
- Use QuickSort initially
- Switches to HeapSort if recursion goes too deep
- Uses InsertionSort on small ranges <br>
📌This is why STL sort is both fast and stable (performace-wise).
