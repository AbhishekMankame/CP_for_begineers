#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int *ptr1 = NULL;

    cout << a << endl;
    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << &ptr2 << endl;
    cout << *ptr2 << endl;
    cout << *ptr << endl;
    cout << *(&a) << endl;
    cout << ptr1 << endl;
    // cout << *ptr1 << endl; --> This causes segmentation fault

    return 0;
}