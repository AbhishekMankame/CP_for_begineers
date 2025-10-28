// 1771 - A --> Hossam and Combinatorics
// Time limit per test: 2 seconds, Memory limit per test: 256 megabytes

/*
Hossam woke up bored, so he decided to create an interesting array with his friend Hazem.

Now,they have an array 'a' of 'n' positive integers. Hossam will choose a number ai and Hazem will choose a number aj.

Count the number of interesting pairs (ai, aj) that meet all the following conditions:
    - 1 <= i, j <= n,
    - i != j
    - The absolute difference |ai - aj| must be equal to the maximum absolute difference over all the pairs in the array. More formally, |ai - aj| = max(1<=p,q<=n)|ap - aq|.

Input: The input consists of multiple test cases. The first line contains a single integer t(1<=t<=100), which denotes the number of test cases. Description of the test cases follows:
The first line of each test case contains an integer n(2<=n<=10^5)
The second line of test case contains n integers a1, a2, ... ,an (1<=ai<=10^5)
It is guaranteed that the sum of n over all test cases does not exceed 10^5


Output: For each test case print an integer - the number of interesting pairs (ai, aj)

Example:
Input:
2
5
6 2 3 8 1
6
7 2 8 3 2 10

Output:
2
4

Note:
In the first example, the two ways are:
    - Hossam chooses the fourth number 8 and Hazem chooses the fifth number 1.
    - Hossam chooses the fifth number 1 and Hazem chooses the fourth number 8.

In the second example, the four ways are:
    - Hossam chooses the second number 2 and Hazem chooses the sixth number 10
    - Hossam chooses the sixth number 10 and Hazem chooses the second number 2
    - Hossam chooses the fifth number 2 and Hazem chooses the sixth number 10
    - Hossam chooses the sixth number 10 and Hazem chooses the fifth number 2

Problem tags: combinatorics, math, sortings, *900

*/

/*
Explanation:

The maximum absolute difference is between the minimum and maximum elements.

a = [1, 3, 5, 5, 1]
min = 1
max = 5
max |ai - aj| = 5 - 1 =4

So no other pair gives a difference greater than 4.
That means we only care about pairs where:
|ai - aj| = 4 ==> (ai, aj) = (1, 5) or (5, 1)


*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x:a) cin >> x;

        long long mn = *min_element(a.begin(), a,end());
        long long mx = *max_element(a.begin(), a.end());

        if(mn == mx){
            cout << 1LL * n * (n-1) << "\n";
        }
        else {
            long long cnt_min = count(a.begin(), a.end(), mn);
            long long cnt_max = count(a.begin(), a.end(), mx);
        }
    }
    return 0;
}