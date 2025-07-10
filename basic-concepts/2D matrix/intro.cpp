#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 2D matrix initialization
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Accessing elements in a 2D matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Reversing a 2D matrix
    cout << "Reversed matrix:" << endl;
    for (int i = matrix.size() - 1; i >= 0; i--)
    {
        for (int j = matrix[i].size() - 1; j >= 0; j--)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}