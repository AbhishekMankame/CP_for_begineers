// Printing diagonal element of an array

#include<iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = sizeof(arr) / sizeof(arr[0]);

    // Left diagonal
    for(int i = 0; i < row; i++) {
        cout << arr[i][i] << endl;
    }
    cout << endl;

    // Right diagonal, without repeating center
    for(int i = 0; i < row; i++) {
        if(i != row/2) {
            cout << arr[i][row - 1 - i] << " ";
        }
    }
    cout << endl;
    return 0;
}

/*
Time Complexity:

Left diagonal -> O(N)
Right diagonal -> O(N)

Therefore: O(N) + O(N) = O(N)

Auxiliary space: O(1)


*/