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