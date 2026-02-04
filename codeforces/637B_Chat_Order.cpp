// https://codeforces.com/problemset/problem/637/B

// 637B - Chat Order
// time limit per test: 3 seconds
// memory limit per test: 256 megabytes

/*
Polycarp is a big lover of killing time in social networks. A page with a chatlist in his favourite network is made so that when a message is sent to some friend, his friend's chat rises to the very top of the page.
The relative order of the other chats doesn't change. If there was no chat with this friend before, then a new chat is simply inserted to the top of the list.

Assuming that the chats list is initially empty, given the sequence of Polycarpus' messages make a list of chats after all of his messages are processed. Assume that no friend wrote any message to Polycarpus.

Input:
The first line contains integer n (1<=n<=200000) - the number of Polycarpus' messages. Next n lines enlist the message recipients in the order in which the messages were sent. The name of each participant is a non-empty sequence of lowercase Englist letters of length at most 10.

Output:
Print all the recipients to who Polycarp talked to in the order of chats with them, from top to bottom.

Examples:
Input:
4
alex
ivan
roman
ivan

Output:
ivan
roman
alex

*/

// Problem tags: *special problem, binary search, constructive algorithm, data structure, sortings, *1200

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    list<string> chats; // maintain order
    unordered_map<string, list<string>::iterator> mp; // fast access

    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        if(mp.find(name)!=mp.end()){
            // already in chats, remove old position
            chats.erase(mp[name]);
        }
        // insert at the top
        chats.push_front(name);
        mp[name]=chats.begin();
    }

    // Output
    for (auto &c:chats) cout<<c<<endl;
    return 0;
}

/*
Time Complexity:
1. Reading input: cin>>name -> O(1) per input -> O(n) total
2. Map lookup: mp.find(name) -> O(1) average (unordered_map)
3. List erase using iterator: chats.erase(mp[name]) -> O(1)
4. Push front in list: chats.push_front(name) -> O(1)
5. Map insertion: mp[name]=chats.begin() -> O(1)

Each iteration of the main loop is O(1) amortized
There are n iterations -> O(n) total
Outputting the list -> O(n)

Overall Time Complexity: O(n) amortized

Space Complexity:
1. List chats -> stores up to n unique friends -> O(n)
2. Map mp -> stores up to n keys + iterators -> O(n)

Overall Space Complexity: O(n)

*/