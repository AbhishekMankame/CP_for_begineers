/*Complete/Solid Diamond Pattern
Input: n = 3
Output:
   *
  ***
   * 
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        for(int j = 0; j<i; j++){
            cout << "*";
        }
        for(int j=0; j<i-1;j++){
            cout <<"*";
        }
        cout << endl;
        for(int j = 0; j<n-i;j++){
            cout<<"*";
        }
        cout << endl;
    }
}