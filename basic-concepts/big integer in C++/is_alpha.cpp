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