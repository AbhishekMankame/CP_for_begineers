/* GCD of two numbers using optimized approach*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b)<<endl;
}

// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(log(min(a, b)))
// The above code uses the Euclidean algorithm to find the GCD of two numbers.
// This is a more efficient approach compared to the previous methods, as it reduces the problems size significantly with each recursive call.
// The major advantage of this approach is that it can handle very large numbers efficiently, making it suitable for competitive programming and real-world applications.