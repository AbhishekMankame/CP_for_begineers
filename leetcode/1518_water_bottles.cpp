// Leetcode 1518 - Water Bottles
// Difficulty: Easy

/*There are 'numBottles' water bottles that are initially full of water. You can exchange 'numExhange' empty water bottles from the market with one full water bottle.
The operation of drinking a full water bottle turns it into an empty bottle.
Given the two integer 'numBottles' and 'numExchange', return the maximum of water bottles you can drink.

Example 1:
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.

Example 2:
Input: numBottles = 15, numExchange = 4
Output: 19
Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
Number of water bottles you can drink: 15 + 3 + 1 = 19.

Constraints:
1<=numBottles<=100
2<=numExchange<=100

Topics: Math, Simulation
*/

#include<iostream>
using namespace std;

int numBottles(int numBottles, int numExchange){
    int count=numBottles; // Start by counting the initial bottles
    while(numBottles>=numExchange){
        int rem=numBottles%numExchange; // Remainder bottles that can't be exchanged
        int newBottles=numBottles/numExchange; // How many new bottles you get
        
        // Add new bottles to the total count
        count+=newBottles;

        // Now, you consume the new bottles, plus the remainder, to get the more bottles
        numBottles=newBottles+rem;
    }   
    return count;
}