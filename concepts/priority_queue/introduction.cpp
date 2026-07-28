#include<iostream>
#include<vector>
using namespace std;

class PriorityQueue {
private:
    vector<int> heap;

    // Helper: swap two elements
    void swap(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }

    // Heapify up: maintain heap after insertion
    void heapifyUp(int index) {
        if(index==0) return;
        int parent = (index-1)/2;
        if(heap[parent]<heap[index]) {
            swap(heap[parent],heap[index]);
            heapifyUp(parent);
        }
    }

    // Heapify down: maintain heap after removal
    void heapifyDown(int index){
        int left = 2*index+1;
        int right= 2*index+2;
        int largest=index;

        if(left<heap.size() && heap[left]>heap[largest]) largest=left;
        if(right<heap.size() && heap[right]>heap[largest]) largest=right;

        if(largest!=index){
            swap(heap[largest],heap[index]);
            heapifyDown(largest);
        }
    }

public:
    PriorityQueue() {}

    // Insert element
    void push(int val){
        heap.push_back(val);
        heapifyUp(heap.size()-1);
    }

    // Remove top element
    void pop(){
        if(heap.empty()) return;
        heap[0]=heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get the top element
    int top(){
        if(!heap.empty()) return heap[0];
        throw runtime_error("Heap is empty");
    }

    // Check if empty
    bool empty(){
        return heap.empty();
    }

    // Heap size
    int size(){
        return heap.size();
    }
};

// Demo
int main() {
    PriorityQueue pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    cout << "Top: " << pq.top() << endl; // 30

    pq.pop();
    cout << "Top after pop: " << pq.top() << endl; // 20

    return 0;
}

/*
Complexity details:
Time complexity:
1. Push Operation (push):
- heap.push_back(val) -> O(1) amortized
- heapifyUp -> in worst case, elements travels from left to root
Heap height = log n (because it's a complete binary tree)
Time Complexity: O(log n)

2. Pop Operation (pop):
- Replace root with last element -> O(1)
- heapify down -> element may move from root to leaf
Heap height = log n
Time Complexity: O(log n)
Space Complexity: O(1)

3. Top Operation (top):
- Just returns the root element
Time Complexity: O(1)
Space Complexity: O(1)

4. Empty/Size:
- Simple vector operations
Time Complexity: O(1)
Space Complexity: O(1)

5. Overall Space Complexity
- Uses vector<int> heap to store all elements
- For n elements -> O(n) space


*/