## Matrix Rotation

Matrix rotation involves rearranging elements of a matrix to represent a rotation by 90 degree, 180 degree or 270 degree (clockwise or anti-clockwise). It's common operation in:
- Computer graphics
- Image processing
- Game development
- Algorithms & coding interviews

### 📌 Assumptions
We usually deal with square matrices (N*N), but rectangular (M*N) matrices can also be rotated using extra space.

### 🔁 Types of Rotations

| Rotation | Direction | Description |
| ----------- | ------- | --------- |
| 90° Clockwise	| ↷ Right | Turn right 90° |
| 90° Anti-Clockwise	| ↶ Left	| Turn left 90° |
| 180° Rotation	| ↻ Upside down	| Turn twice |
| 270° Clockwise |	= 90° ACW |	3 × 90° Clockwise = 1 × 90° Left |

### 🔧 In-place Matrix Rotation (N*N)
✅ 90° Clockwise Rotation
Steps:
1. Transpose the matrix (flip over the diagonal)
2. Reverse each row

<pre>
for(int i=0;i< n;i++){
    for(int j=i;j< n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}

for(int i=0;i< n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
} </pre>

✅ 90° Anti-Clockwise Rotation
Steps:
1. Transpose the matrix
2. Reverse each column

<pre>
for(int i=0;i< n;i++){
    for(int j=i;j< n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}

for(int j=0;j< n;j++){
    int top=0,bottom=n-1;
    while(top < bottom){
        swap(matrix[top][i], matrix[bottom][i]);
        top++;
        bottom--;
    }
}
</pre>

✅ 180° Rotation
You can do either:
- Two 90° clockwise or two 90° anti-clockwise rotations
- Reverse both rows and columns
<pre>
for(int i=0;i< n;i++){
    reverse(matrix[i].begin(),matrix[i].end()); // Reverse each 
}
reverse(matrix.begin(),matrix.end()); // Reverse the entire matrix
</pre>

### 🔁 For Rectangular Matrices (M*N)
- In-place rotation is not possible unless M=N
- Use an extra matrix to store the rotated version.

Example: 90° Clockwise
<pre>
vector< vector < int > > rotate90Clockwise(vector< vector < int> >& mat){
    int M = mat.size();
    int N = mat[0].size();
    vector< vector < int> > rotated(N, vector< int>(M));

    for(int i=0;i < M;i++){
        for(int j=0;j < N;j++){
            rotated[j][M - 1 - i] = mat[i][j];
        }
    }
    return rotated;
}
</pre>

## 🔒 Constraints to Remember
| Constraint | Details |
| --------- | --------- |
| In-place rotation | Only possible for square matrices |
| Time Complexity | O(N^2) for N*N matrices |
| Space Complexity | O(1) if in-place, else O(N^2) |

## 🧠 Interview Tips
- Always clarify if the matrix is square
- Ask if you're allowed to use extra space
- Know how transpoes and reversals work
- Practice with edge cases like 1*1, empty matrix, and 2*2 matrices