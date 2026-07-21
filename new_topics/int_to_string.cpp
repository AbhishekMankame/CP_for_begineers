// long long int to string

// Method 1: 'to_string()'

#include<iostream>
#include<string>
using namespace std;

int main() {
    long long num = 49927398716LL;
    string s = to_string(num);
    cout << s << endl;
    return 0;
}

// Method 2: Write your own conversion
