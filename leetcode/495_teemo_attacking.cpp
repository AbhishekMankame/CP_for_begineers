// Leetcode 495 - Teemo Attacking
// Easy

/*
Our hero Teemo is attacking an enemy Ashe with poison attacks! When Teemo attacks Ashe, Ashe gets poisoned for a exactly 'duration' seconds.
More formally, an attack at second 't' will mean Ashe is poisoned during the inclusive time interval [t, t + duration - 1].
If Teemo attacks again before the poison effect ends, the timer for it is reset, and the poison effect will end 'duration' seconds after the new attack.

You are given a non-decreasing integer array 'timeSeries', where 'timeSeries[i]' denotes that Teemo attacks Ashe at second 'timeSeries[i]', and an integer 'duration'.
Return the total number of seconds that Ashe is poisoned.

Example 1:
Input: timeSeries = [1, 4], duration = 2
Output: 4
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.

Example 2:
Input: timeSeries = [1, 2], duration = 2
Output: 3
Explanation: Teemo's attacks, and Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.

Constraints:
- 1 <= timeSeries.length <= 10^4
- 0 <= timeSeries[i], duration <= 10^7
- timeSeries is sorted in non-decreasing order.

Topics: Array, Simulation

*/

#include<iostream>
#include<vector>
using namespace std;

int findPoisonedDuration(vector<int>& t, int duration){
    int totalTime = 0;

    // Traverse through all attack times
    for(int i=1;i<t.size();i++){
        // Check if the next attack is before the previous one ends
        if(t[i]<t[i+1]+duration) {
            // If overlap occurs, add only the non-overlapping part
            totalTime += t[i] - t[i-1];
        }
        else {
            // If no overlap, simply add the full duration
            totalTime += duration;
        }
    }

    // Add the duration for the first attack
    totalTime += duration;

    return totalTime;
}

/*
Explanation notes:
1. First Attack: The first attack always contributes the full duration, so we add it at the end of the loop after checking the overlaps.
2. Overlapping Attack Duration: When checking if t[i] is before t[i-1] + duration, you calculate the overlap (t[i] - [i-1]), which is non-overlapping duration.
3. Non-overlapping Attack: If the attacks don't overlap, you simply add the full duration.

Why this Works:
- The loop iterates through the attack times and checks if the next attack occurs before the previous attack ends.
- If they overlap, we add the remaining time between attacks. If no overlap occurs, we add the full duration.

Time Complexity: O(n)
- You iterate through the vector t exactly once.
- Each iteration performs O(1) work.
- Therefore, total time = linear in the number of attacks.

Space Complexity: O(1)
- You use only a few integer variables (totalTime, loop index)
- No extra data structures are used.
- Space remains constant regardless of input size.
*/