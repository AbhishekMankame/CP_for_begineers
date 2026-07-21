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
string convertToString(long long num){
    if(num == 0) return "0";

    bool negative = false;
    if(num<0){
        negative = true;
        num = -num;
    }
    string s;

    while(num>0) {
        s += char('0'+(num&10));
        num /= 10;
    }

    if(negative) s+='-';

    reverse(s.begin(),s.end());

    return s;
}