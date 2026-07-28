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

/*
Time Complexity Analysis:
1. Initial Bottles: You start with numBottles bottles.
2. While loop iteration: On each iteration of the loop, numBottles is reduced by a factor of numExchange because numBottles is updated to newBottles+rem, where newBottles is numBottles/numExchange.

Each time you update numBottles, it gets smaller as numBottles/numExchange is always less than numBottles. Therefore, the number of iterations of the while loop depends on how many times you can divide numBottles by numExchange before numBottles become less than numExchange.
The number of iterations can be approximated by:
Iterations = log numBottles to the base numExchange.

Overall Time Complexity:
The time complexity of this code is dominated by the while loop, which runs approximately log (numExchange) numBottles time.
Where numBottles is the number of bottles you start with, and numExchange is the number of empty bottles required for a new one.

Space Complexity:
The space complexity is O(1) because the algorithm uses only a fixed amount of extra space (just few integer variables).
*/