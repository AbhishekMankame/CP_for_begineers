// Some basic starter programs

#include<bits/stdc++.h>
using namespace std;


// 1. Sum of odd and even elements of array:

int oddAndEvenSum(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even_sum = 0;
    int odd_sum = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even_sum+=arr[i];
        else odd_sum+=arr[i];
    }
    cout << even_sum << " " << odd_sum << endl;
    return 0;
}


// 2. Generate sum of pairs using single array:

int sumOfPairs(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum_pair = arr[i] + arr[j];
            cout << sum_pair << " ";
        }
    }
}


// 3. Sum of pairs using two arrays:

int sumOfPairs2Arrays(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum_pairs = arr1[i] + arr2[j];
            cout<<sum_pairs<<" ";
        }
    }
    cout<<endl;
    return 0;
}


// 4. Maximum pair sum using two arrays

int maxPairSum() {
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int max_sum = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int pair_sum = arr1[i]+arr2[j];
            max_sum = max(max_sum,pair_sum);
        }
    }
    cout << max_sum << endl;
    return 0;
}


/*
5. Number of prime numbers within a range:

Example: Number of prime numbers within a range 1 to 11
The numbers between 1 and 11 are: 1 2 3 4 5 6 7 8 9 10 11

-> To traverse from starting to end run a 'for' loop
-> The outer loop will be used to traverse
-> The inner loop will be used to check a particular element (number) is a prime number or not
-> Inside the loop we will track divisibility count
-> Inner loop will start from 1 and will go till the number itself

*/

int primeNumbers(){
    int s = 1;
    int e = 11;
    int count_prime = 0;

    for(int i=s;i<=e;i++){
        int count = 0;
        for(int j=1;j<=i;j++){
            if(j%i==0) count++;
        }
        if(count == 2) count_prime++;
    }
    cout << count_prime << endl;
    return 0;
}


/*
6. Reverse number summation between the range:

Note: To get the last digit, we need do modulo 10
23 % 10 = 3
46 % 10 = 6
*/

int revSum() {
    int s = 21;
    int e = 25;

    int rev_sum = 0;

    for(int i=s;i<=e;i++){
        int num = i; // we don't want to lose thge actual data
        int rev = 0;

        while(num > 0){
            int rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }
        rev_sum+=sum;
    }
    cout << rev_sum << endl;
    return 0;
}


/*
7. Triplet Sum
-> The first condition is to have atleast 3 elements
-> In triplet sum, we have to fix atleast 2 elements, then we have to make a pair with the rest of the elements.
-> There will be 3 pointers i, j and k.
-> Triplet sum = arr[i] + arr[j] + arr[k]
-> We will fix i and j, and k will move. Once k reached at the end, we will change only j.
-> Once j reach the end, we will change i.
*/

int tripletSum() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int sum = arr[i] + arr[j] + arr[k];
                cout << sum << " ";
            }
        }
    }
}


// 8 - First and last index of an element in the sorted array

int firstAndLastIndex() {
    int arr = {1,2,3,3,3,4,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;
    int first = -1;
    int last = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target) first = arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i] == target) last = arr[i];
    }
    cout << first << " " << last << endl;
    return 0;
}


// 9 -  Count of frequency of each element in the array

int frequency() {
    int arr = {2,3,4,2,5,6,6,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool vis[] = new bool[n];
    vis.fill(false);

    for(int i=0;i<n;i++){
        if(vis[i] == false){
            int count = 1;
            vis[i] = true;
            for(int j=i+1;j<n;j++){
                if(arr[i] == arr[j]) {
                    vis[j] = true;
                    count++;
                }
            }
            cout << arr[i] << "->" << count;
        }
    }
    cout << endl;
    return 0;
}
