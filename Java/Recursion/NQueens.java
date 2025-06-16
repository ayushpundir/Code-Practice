import java.util.Arrays;

public class NQueens {
    public static void main(String[] args) {
        //int n = 4;// It is a 4X4 matrix and I need to place 4 queens in it
        int[][] board = new int[4][4];
        NqueenSolver(board, 0);
        
    }
    static void NqueenSolver (int[][]board, int row){
        if(row==board.length){
            for(int[] arr : board){
                System.out.println(Arrays.toString(arr));
            }
            System.out.println();
            return ;
         }

         for(int col = 0;col<board.length;col++){
            if(check(board, row, col)){
                board[row][col]=1;
                NqueenSolver(board, row+1);
                board[row][col]=0;
            }
         }
        }
    
    static boolean check (int[][] board, int row, int col){ // place kar sakta hu toh true
        for(int i = 1;i<=Math.min(row, col);i++){
            if(board[row-i][col-i]==1) return false;
        }
        for(int i = 0;i<row;i++){
            if(board[i][col]==1) return false;
        }
        for(int i = 1;i<=Math.min(row, board.length-col-1); i++){
            if(board[row-i][col+i]==1) return false;
        }
        return true;
    }
}
