// C++ code for each alpha function
#include <iostream>
using namespace std;

bool is_alpha(char s)
{
    return ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'));
}
int main()
{

    cout << is_alpha('a');
}

// Time Complexity: O(1) --> The function performs a constant amount of work regardless of the input size.

// Space Complexity: O(1) --> The function uses a constant amount of space.