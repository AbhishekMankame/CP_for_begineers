// Bubble Sort: Take larger element to the end by repeatedly swapping adjacent elements if they are in wrong order.
// For N elements, we need to do the process N-1 times.

#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        // repeated swapping
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    for (int x = 0; x < n; x++)
    {
        cout << arr[x] << ",";
    }

    return 0;
}