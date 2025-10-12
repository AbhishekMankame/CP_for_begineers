// Two Pointers technique
/*It is an easy and effective technique that is typically used for searchin pairs in a sorted array.
Given a sorted array A(sorted in ascending order), having N integers, find if there exists any pairs of elements (A[i], A[j]) such that their sum is equal to X.

Illustration:
A[] = {10,20,35,50,75,80}
X=70
i=0
j=5

A[i] + A[j] = 10 + 80 = 90
Since A[i] + A[j] > X, j--
i=0
j=4

A[i] + A[j] = 10 +75 = 85
Since A[i] + A[j] > X, j--
i=0
j=3

A[i] + A[j] = 10 + 50 = 60
i=1
j=3

A[i] + A[j] = 20 + 50 = 70
thus this signifies that pair is found.
*/