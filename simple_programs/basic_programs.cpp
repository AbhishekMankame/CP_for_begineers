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