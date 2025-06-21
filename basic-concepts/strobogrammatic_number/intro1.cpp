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