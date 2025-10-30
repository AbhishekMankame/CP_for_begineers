// 989 - Add to Array-Form of Integer
// Easy

/*The array-form of an integer num is an array representing its digits in left to right order.
- For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

Example 1:
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

Example 2:
Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181

Example 3:
Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021

Constraints:
1 <= num.length <= 10^4
0 <= num[i] <= 9
num does not contain any leading zeros except for the zero itself.
1 <= k <= 10^4

Topics: Array, Math

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> addToArrayForm(vector<int>& num, int k){
    int n = num.size();
    int i = n - 1; // start from the last (least significant) digit
    vector<int> res; // to store the resulting digits

    // Loop until we've processed all digits of num and k
    while(i>=0 || k>0){
        if(i>=0) k += num[i--]; // add num[i] to k, then move left
        res.push_back(k%10); // store the current last digit of k
        k /= 10; // remove the last digit (carry for the next step)
    }

    reverse(res.begin(), res.end()); // because we added digits from right to left
    return res;
}