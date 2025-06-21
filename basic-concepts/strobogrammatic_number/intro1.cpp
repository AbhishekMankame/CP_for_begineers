#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string &num)
{
    unordered_map<char, char> rotate = {
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}};
    int left = 0, right = num.size() - 1;
    while (left <= right)
    {
        if (rotate.find(num[left]) == rotate.end() || rotate[num[left]] != num[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    string num;
    cin >> num;

    if (isStrobogrammatic(num))
        cout << "Strobogrammatic" << endl;
    else
        cout << "Not Strobogrammatic" << endl;

    return 0;
}

// This code checks if a number is strobogrammatic, meaning it looks the same when rotated 180 degrees.
// It uses a map to define which digits can be rotated and checks the number from both ends towards the center.
// The function `isStrobogrammatic` iterates through the string representation of the number, checking if each digit matches its corresponding rotated counterpart.
// The main function reads a number from input, calls the checking function, and prints whether the number is strobogrammatic or not.
// The code is efficient and works in O(n) time complexity, where n is the length of the number string.
// The unordered_map is used for O(1) average time complexity lookups for the digit rotations.
// Space Complexity is O(1) since the map size is constant and does not depend on the input size.