## Space Complexity
Space complexity is nothing but the amount of memory space that an algorithm or a problem takes during the execution of that particular problem/algo.<br>
The space complexity is not only calculated by the space used by the variables in the problem/algo it also includes and considers the space for input values with it.

### Space Complexity vs Auxiliary Space
There is a sort of confusion among people between the space complexity and the auxiliary space. So let's be clear about that, so auxiliary space is nothing but the space required by an algorithm/problem and it is not equal to the space complexity because space complexity includes space for input values along with it also.<br>

So we can say that space complexity is the combination or sum up of the auxiliary space and the space used by the input values.

<pre>
Space Complexity = Auxiliary Space + Space used for input values
</pre>

### Algorithm to Evaluate Space Complexity in Data Structures
To evaluate space complexity in data structures, analyze the memory usage of variables and data structures in an algorithm. Assign memory for each, considering primitive types, arrays and linked structures. Calculate total memory, distinguishing between auxiliary space and input space. Express space complexity as a function of input size using Big-O notation. Explore alternative data structures to optimize memory usage. Consider trade-offs between time and space complexity, ensuring efficient utilization of memory resources. This methodical approach facilitates a comprehensive understanding of an algorithm's space requirements, aiding in designing memory efficient solutions.


### Algorithm Analysis
The assessment of algorithms typically occurs in two distinct phases: before implementation and after implementation. <br>
Apriori analysis involves the theoretical examination of an algorithm. This analysis assumes that variables like processor speed are constant and have no influence on the implementation. It aims to determine the efficiency of an algorithm based on theoretical considerations.<br>
Emperical analysis, on the other hand, is a posterior analysis. This involves implementing the chosen algorithm using a programming language and deploying it on the targeted computer system. Practical data, including running time and space requirements, is then collected to conduct a comprehensive investigation into the algorithm's performance in real-word scenarios.