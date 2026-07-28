#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int mySqrt(int x)
{
    if (x == 0 || x == 1)
        return x;

    int st = 0, end = x, ans = 0;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            st = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}

int main()
{
    cout << mySqrt(5);
    return 0;
}