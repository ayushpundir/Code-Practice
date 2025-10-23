public class Sudoku {
    public static void main(String[] args) {
        int[][] board = new int[][]{
                {3, 0, 6, 5, 0, 8, 4, 0, 0},
                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                {0, 0, 3, 0, 1, 0, 0, 8, 0},
                {9, 0, 0, 8, 6, 3, 0, 0, 5},
                {0, 5, 0, 0, 9, 0, 6, 0, 0},
                {1, 3, 0, 0, 0, 0, 2, 5, 0},
                {0, 0, 0, 0, 0, 0, 0, 7, 4},
                {0, 0, 5, 2, 0, 6, 3, 0, 0}
        };
        

        
        sudokuSolver(board);
        for(int i = 0;i<board.length;i++){
            for(int j= 0;j<board.length;j++){
                System.out.print(board[i][j] + " ");

            }
            System.out.println();
        }
    }
    static boolean sudokuSolver(int[][] board){
        boolean isEmpty = true; //  I assume that the matrix is complete 
        int row = -1;
        int col = -1;
        for(int i = 0;i<board.length;i++){
            for(int j = 0;j<board.length;j++){
                if(board[i][j]==0){
                    row = i;
                    col = j;
                    isEmpty = false;
                    break;
                }
            }
            if(isEmpty==false) break; //we have got a row with empty no need to check further
        }

        if(isEmpty){//board search (for loop) completed and it is still true that means the sudoku is solved
            return true;
        }

        //break
        for(int i = 1;i<=9;i++){
            if(check(board, row, col, i)){
                board[row][col]=i;
                if(sudokuSolver(board)){
                    return true; // solved
                }
                else{
                    board[row][col]=0;
                }
            }
        }
return false;//can't be solved

    }
    static boolean check(int[][] board, int row, int col, int num){
        for(int i = 0;i<board.length;i++){ // checking for row
            if(board[row][i]==num) return false;
        }
        for(int[] cols : board){ // checking for columns
            if(cols[col] == num ) return false; 
        }
        int sqrt = (int)Math.sqrt(board.length);
        int rowStart = row - row%sqrt;
        int colStart = col - col%sqrt;

        for(int i = rowStart; i < rowStart + sqrt; i++){
    for(int j = colStart; j < colStart + sqrt; j++){
        if(board[i][j] == num) return false;
    }
}

        return true;
    }
}
