#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans(n);
    stack<int> s;

    // NSL -> Next Smaller Element on Left side
    for(int i=0;i<n;i++){
        // remo ving all the useless elements
        while(!s.empty()&&s.top()>=v[i]){
            s.pop(); // popping the element from the stack
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

// TC: O(N) for precomputing the vector for next smaller element towards the left.

/*
## Variations:

- For next greater element towards left: while(!s.empty() && s.top<=v[i])
- For next greater than or equal to element towards left: while(!s.empty() && s.top<v[i])
- For next smaller than or equal to element towards left: while(!s.empty() && s.top>v[i])

- For next smaller element towards right: We need to store the elements from right in the stack. So we need to traverse the vector from right to left
for(int i=n-1;i>=0;i--)
*/