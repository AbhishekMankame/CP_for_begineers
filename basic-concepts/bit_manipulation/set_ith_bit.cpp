/*Set the ith bit
Problem: Given a number `n` and index `i`, set the `i-th` bit (make it 1)

Example:
Input: n = 4, i = 0 // (4 = 100)
Output: 5 // (5 = 101)

*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;

    // Set the i-th bit
    int result = n | (1 << i);

    cout << result << endl;
    return 0;
}
