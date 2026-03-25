#include<bits/stdc++.h>
using namespace std;

class Max_Heap {
    vector<int> heap;
    
    void heapify_down(int ind){
        int n=heap.size();
        int left=2*ind+1;
        int right=2*ind+2;
        int largest=ind;
        int value=heap[ind];
        if(left<n && heap[left]>value){
            value = heap[left];
            largest = left;
        }

        if(right<n && heap[right]>value){
            value = heap[right];
            largest = right;
        }

        if(largest == ind) return;
        swap(heap[ind],heap[largest]);
        heapify_down(largest);
    }

    void heapify_up(int ind){
        if(ind==0) return;
        int parent = (ind-1)/2;
        if(heap[ind]>heap[parent]){
            swap(heap[ind],heap[parent]);
            heapify_up(parent);
        }
    }
}