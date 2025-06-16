public class Nknights {
    public static void main(String[] args) {
        int n = 3;
        boolean[][] board = new boolean[n][n];
        knight(board, 0, 0, 3);
    }

    static void knight(boolean[][] board, int row, int col, int knights) {
        if (knights == 0) {
            display(board);
            System.out.println();
            return;
        }

        if (row == board.length - 1 && col == board.length) {
            return;
        }

        if (col == board.length) {
            knight(board, row + 1, 0, knights);
            return;
        }

        if (isSafe(board, row, col)) {
            board[row][col] = true;
            knight(board, row, col + 1, knights - 1);
            board[row][col] = false;
        }

        knight(board, row, col + 1, knights);
    }

    private static boolean isSafe(boolean[][] board, int row, int col) {
        if (isValid(board, row - 2, col - 1)) {
            if (board[row - 2][col - 1]) {
                return false;
            }
        }

        if (isValid(board, row - 1, col - 2)) {
            if (board[row - 1][col - 2]) {
                return false;
            }
        }

        if (isValid(board, row - 2, col + 1)) {
            if (board[row - 2][col + 1]) {
                return false;
            }
        }

        if (isValid(board, row - 1, col + 2)) {
            if (board[row - 1][col + 2]) {
                return false;
            }
        }

        return true;
    }

    // do not repeat yourself, hence created this function
    static boolean isValid(boolean[][] board, int row, int col) {
        if (row >= 0 && row < board.length && col >= 0 && col < board.length) {
            return true;
        }
        return false;
    }

    private static void display(boolean[][] board) {
        for(boolean[] row : board) {
            for(boolean element : row) {
                if (element) {
                    System.out.print("K ");
                } else {
                    System.out.print("O ");
                }
            }
            System.out.println();
        }
    }
}
//By GORK
// public class NKnights {
//     public static void main(String[] args) {
//         int n = 4; // Board size
//         boolean[][] board = new boolean[n][n];
//         nKnights(board, 0, 0, 0, n);
//     }

//     static void nKnights(boolean[][] board, int row, int col, int knightsPlaced, int n) {
//         // Base case: If all knights are placed, display the board
//         if (knightsPlaced == n) {
//             display(board);
//             return;
//         }

//         // If we’ve reached the end of the board, return
//         if (row == n) {
//             return;
//         }

//         // Calculate next row and column for the next recursive call
//         int nextRow = row;
//         int nextCol = col + 1;
//         if (nextCol == n) {
//             nextRow++;
//             nextCol = 0;
//         }

//         // Option 1: Place a knight at (row, col) if safe
//         if (isSafe(board, row, col)) {
//             board[row][col] = true;
//             nKnights(board, nextRow, nextCol, knightsPlaced + 1, n);
//             board[row][col] = false; // Backtrack
//         }

//         // Option 2: Skip placing a knight at (row, col)
//         nKnights(board, nextRow, nextCol, knightsPlaced, n);
//     }

//     static boolean isSafe(boolean[][] board, int row, int col) {
//         // All possible knight moves
//         int[][] knightMoves = {
//             {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},
//             {1, -2}, {1, 2}, {2, -1}, {2, 1}
//         };

//         // Check each knight move
//         for (int[] move : knightMoves) {
//             int newRow = row + move[0];
//             int newCol = col + move[1];

//             // If the move is within bounds and a knight is present, it’s unsafe
//             if (newRow >= 0 && newRow < board.length && newCol >= 0 && newCol < board.length) {
//                 if (board[newRow][newCol]) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

//     static void display(boolean[][] board) {
//         for (boolean[] row : board) {
//             for (boolean cell : row) {
//                 if (cell) {
//                     System.out.print("K ");
//                 } else {
//                     System.out.print("O ");
//                 }
//             }
//             System.out.println();
//         }
//         System.out.println();
//     }
// }
// public class Nknights {
//     public static void main(String[] args) {
//         int row = 0;
//         boolean[][] board = new boolean[4][4];
//         nKnights(board, row, 0, 0);
//     }
//     static void nKnights(boolean[][] board, int n, int col, int k){
//         if(k==board.length){
//             display(board);
//             return;
//         }
//         if(k!=board.length && n == board.length) return;
//             if(check(board, n,col)){
//                 board[n][col] = true;
//                 nKnights(board, n, col+1, k+1);
//                 board[n][col] = false;
//             }
            
//                 nKnights(board, n+1, 0, k);
            
//         }
//         static boolean check (boolean[][] board, int row, int col){
//             if(row+2<board.length){// for down and right


//                 if(col+1<board.length){
//                     if(board[row+2][col+1] || board[col+1][row+2]) return false;
//                 }

//                 if(col-1>=0){
//                     if(board[row+2][col-1] || board[col-1][row+2]) return false;
//                 }
//             }

//             if(row-2>=0){//for top and left
//                 if(col+1<board.length){
//                     if(board[row-2][col+1] || board[col+1][row-2]) return false;
//                 }

//                 if(col-1>=0){
//                     if(board[row-2][col-1] || board[col-1][row-2]) return false;
//                 }
//         }
//         return true;
// }
// static void display(boolean[][] board){
//     for(boolean[] row : board){
//         for(boolean cell : row){
//             if(cell){
//                 System.out.print("K ");
//             }
//             else{
//                 System.out.print("O ");
//             }
//         }
//         System.out.println();
//     }
//     System.out.println(); 
// }
// }