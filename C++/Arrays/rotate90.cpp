#include<iostream>
using namespace std;

void rotateMatrix(int mat[][4], int N)
{
    // Consider all squares one by one
    for (int x = 0; x < N / 2; x++) {
        // Consider elements in group
        // of 4 in current square
        for (int y = x; y < N - x - 1; y++) {
            // Store current cell in
            // temp variable
            int temp = mat[x][y];
  
            // Move values from right to top
            mat[x][y] = mat[y][N - 1 - x];
  
            // Move values from bottom to right
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
  
            // Move values from left to bottom
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
  
            // Assign temp to left
            mat[N - 1 - y][x] = temp;
        }
    }
}
  
// Function to print the matrix
void displayMatrix(int mat[][4],int N)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
  
/* Driver code */
int main()
{
    // Test Case 1
    int M=4,N=4;
    int mat[M][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
  
    // Function call
    rotateMatrix(mat, N);
  
    // Print rotated matrix
    displayMatrix(mat, N);
  
    return 0;
}

// #include <iostream>
// using namespace std;

// int main(){

//     int row=3,col=3;
//     int matrix[row][col]={{1,2,3},{4,5,6},{7,8,9}};
//     int colindex=0;
//     while(colindex<col){
//         for(int rowindex=row-1;rowindex>=0;rowindex--){
//             int element=matrix[rowindex][colindex];
//             cout<<element<<" ";
//         }
//         cout<<endl;
//         colindex++;
//     }
    
//     return 0;
// }