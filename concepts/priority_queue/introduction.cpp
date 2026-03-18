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
}