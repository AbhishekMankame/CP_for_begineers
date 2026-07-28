#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator rt;
    for (rt = vec.rbegin(); rt != vec.rend(); rt++)
    {
        cout << *(rt) << " ";
    }
    cout << endl;

    return 0;
}