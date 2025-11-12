#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string> p;  // this is the pair of integer and string
    pair<int,double> p2;

    p = make_pair(2,"abc"); // Pair initialization
    cout << p.first<<endl; // to access first element
    cout << p.second<<endl; // to access second element

    p2 = {2,"abc"}  // one more method to initialize the pair
}