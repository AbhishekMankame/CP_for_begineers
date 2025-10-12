// Equilibrium index of an array using prefix-sum:

/*Here the idea is to take the prefix sum of the array twice. Once from the front end of the array and antoher from the back end of the array.
After taking both prefix sums run a loop and check for some i if both the prefix sum from one array is equal to prefix sum from the second array then that point can be considered as the Equilibrium point.

Follow the given steps to solve the problem:
- Declare two arrays to store the prefix sum of the array from the front and the back.
- Run a loop from 1 to N and check if at any point prefix sum of the array from the front is equal to the prefix sum of the array from the back.
- If any such index is found then return that index
- Else return -1
*/

#include<bits/stdc++.h>
using namespace std;

int equilibrium(int a[], int n){
    if(n==1) return 0;
    int forward[n]={0};
    int backward[n]={0};
    int forward[0]=a[0];
    int rev[n] = {0};

    forward[0]=a[0];
    rev[n-1]=a[n-1];

    // Taking the prefix sum from the front of the array
    for(int i=1;i<n;i++){
        forward[i]=forward[i-1]+a[i];
    }

    // Taking the prefix sum from the back end of the array
    for(int i=n-2;i>=0;i--){
        rev[i]=rev[i+1]+a[i];
    }

    // Checking if forward prefix sum is equal to rev prefix sum
    for(int i=0;i<n;i++){
        if(forward[i]==rev[i]) return i;
    }

    return -1;

    // If you want all the points of equilibrium create vector and push all equilibrium points in it and return the vector

}

// Driver code
int main() {
    int arr[] = {-7,1,5,2,-4,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    // Function call
    cout<<"First point of equilibrium is at index "<<equilibrium(arr,n)<<endl;
    return 0;
}

// Output: First Point of equilibrium is at index 3
// Time Complexity: O(N)
// Space Complexity: O(N)