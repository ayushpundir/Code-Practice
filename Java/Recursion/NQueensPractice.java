public class NQueensPractice {
    public static void main(String[] args) {
        // int n = 4; we have to place n queens in a nXn matrix
        boolean[][] matrix = new boolean[4][4];
        System.out.println(queensSolver(matrix, 0)); // initially we are at 0th row

    }
    static int queensSolver(boolean[][] matrix, int row){
        if(row==matrix.length) {
            display(matrix);
            return 1;
        }
        int count = 0;

        for(int col = 0;col<matrix.length;col++){ //agar m yaha place kar sakta hu toh hi backtracking hogi warna direct next call maro usse row m
            if(check(matrix, row, col)){
                matrix[row][col]=true;
                count += queensSolver(matrix, row+1);
                matrix[row][col]=false;
            }
        }
        return count;
    }
    static boolean check (boolean[][] matrix, int row, int col){
        for(int i = 0;i<row;i++){
            if(matrix[i][col]==true) return false;
        }
        for(int i = 1;i<=Math.min(row, col);i++){ // for left diagonal
            if(matrix[row-i][col-i]==true) return false; 
        }
        for(int i = 1;i<=Math.min(row, matrix.length - col -1);i++){
            if(matrix[row-i][col+i]==true) return false; // for right diagonal col is increasing
        }
        return true;
    }
    static void display(boolean[][] matrix){
        for(boolean[] row : matrix){
            for(boolean queen : row){
                if(queen){
                    System.out.print("Q ");
                }
                else{
                    System.out.print("X ");
                }
                
            }
            System.out.println();
        }
        System.out.println();
    }

}
