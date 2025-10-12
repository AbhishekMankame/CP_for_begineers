// Equilibrium index of an array using prefix-sum:

/*Here the idea is to take the prefix sum of the array twice. Once from the front end of the array and antoher from the back end of the array.
After taking both prefix sums run a loop and check for some i if both the prefix sum from one array is equal to prefix sum from the second array then that point can be considered as the Equilibrium point.

Follow the given steps to solve the problem:
- Declare two arrays to store the prefix sum of the array from the front and the back.
- Run a loop from 1 to N and check if at any point prefix sum of the array from the front is equal to the prefix sum of the array from the back.
- If any such index is found then return that index
- Else return -1
*/