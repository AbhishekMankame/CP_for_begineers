/*Hollow Square Pattern
Input: n = 3
Output:
***
* *
***

Input: n = 4
Output:
****
*  *
*  *
****

*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > 0 and i < n - 1 and j > 0 and j < n - 1){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}