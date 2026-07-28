// Leetcode 246 - Strobogrammatic Number
// Easy

/*
A strobogrammatic number is a number that looks the same when rotated 180 degrees.
For example, 69 and 101 are strobogrammatic numbers, but 123 is not. The valid digits for a strobogrammatic number are: 0, 1, 6, 8, and 9.

To check if a number is strobogrammatic in C++, you can follow these steps:
1. Check the number from both ends.
2. For each digit, check if its pair from the opposite end forms a valid strobogrammatic pair.
3. The valid pairs are:
- 0 <-> 0
- 1 <-> 1
- 6 <-> 9
- 8 <-> 8
- 9 <-> 6

*/

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isStrobogrammatic(const string& num) {
    // Map to store valid strobogrammatic pairs
    unordered_map<char,char> strobogrammaticPairs = {
        {'0','0'}, {'1','1'}, {'6','9'}, {'8','8'}, {'9','6'}
    };

    int left=0,right=num.size()-1;

    while(left<=right){
        // If the current pair of digits doesn't match strobogrammatically, return false
        if(strobogrammaticPairs.find(num[left])==strobogrammaticPairs.end() || strobogrammaticPairs[num[left]]!=num[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string num;
    cout<<"Enter a number: ";
    cin>>num;

    if(isStrobogrammatic(num)){
        cout << num << " is a strobogrammatic number.\n";
    }
    else {
        cout << num << " is not a strobogrammatic number.\n";
    }

    return 0;
}

/*
Time Complexity:
The function isStrobogrammatic checks the digits of the number from both ends towards the center. It compares each pair of digits at positions left and right and verifies whether they form a valid strobogrammatic pair.
1. Iterating through the digits:
- The function uses two pointers, left starting from 0 and right starting from num.size()-1. These pointers move towards the center of the string.
- In the worst case, the function will compare all the digits once, which means it will iterate through the string half the length. If the number has n digits, the loop will run n/2 times.
- Therefore, the time complexity is O(n), where n is the length of the string.

2. Map Lookups:
- For each digit comparison, the function checks if the character is present in the strobogrammaticPairs map.
- The lookup in an unordered map takes O(1) on average due to the hash table implementation. So, the complexity us O(1)

Thus, the total time complexity is:
O(n) where n is the length of the number.

Space Complexity: 
1. Auxiliary Space:
- The function uses a map strobogrammaticPairs to store valid strobogrammatic digit pairs. This map contains a constant number of entries (5 pairs), regardless of the input size.
- Therefore, the space used by the map is O(1) since the size of the map is constant.

2. Input Storage:
- The function takes the number as string input. If we consider the string num as an input, its space complexity is O(n), where n is the length of the number (the number of digits).

Thus the total space complexity is:
O(n), due to the space required to store the input string.

Final Complexity Summary:
- Time Complexity: O(n)
- Space Complexity: O(n)


*/