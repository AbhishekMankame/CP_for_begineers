#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
private:
    vector<int> heap; // Using a dynamic array (vector) for heap storage
    
    // Function to heapify a subtree rooted at index i
    void heapifyDown(int i){
        int largest = i; // Assume root is the largest
        int left = 2*i+1; // Left child index
        int right = 2*i+2; // Right child index

        // If left child is larger than the root
         if(left<heap.size() && heap[left]>heap[largest]) 
            largest=left;

        // If right child is larger than the root
        if(right<heap.size() && heap[right]>heap[largest])
            largest = right;

        // If largest is not root, swap and continue heapifying
        if(largest!=i){
            swap(heap[i],heap[largest]);
            heapifyDown(largest); // Recursively heapify the affected subtree
        }
    }

}