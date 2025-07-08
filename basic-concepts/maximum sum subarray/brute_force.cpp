#include <iostream>
using namespace std;

int maximumSum(int arr[], int n)
{
    int maxx = 0;
    int x = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < x; i++)
    {
        int current = 0;
        for (int j = i; j = i + n - 1; i++)
        {
            current = current + arr[i];
        }
        maxx = max(maxx, current);
    }

    return maxx;
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2, 3, 4};
    int n = 4;
}