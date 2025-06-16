public class CountingPath{
    public static void main(String[] args){
        int n = 3; // size of matrix nXm == 3X3;
        int row = n, col = n;
        System.out.println(countPath(row, col));
    }
    static int countPath(int row, int col){
        if(row==1 || col==1) return 1;

        
        int right = countPath(row, col-1);
        int down = countPath(row-1, col);

        return right+down;
    }
}