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