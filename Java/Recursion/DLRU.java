import java.util.Arrays;

public class DLRU {
    public static void main(String[] args) {
        boolean[][] arr = {
            {true, true, true},
            {true, true, true}, 
            {true, true, true}
        };
        int row =0, col = 0;
        int[][] path = new int[3][3];
        findPathSteps("", row, col, arr, path, 1);
    }
    static void findPath(String processed, int row, int col,boolean[][] arr){
        if(row==arr.length-1 && col==arr[0].length-1){
            System.out.println(processed);
            return ;
        }
        if(!arr[row][col]) return;

        arr[row][col]= false;//visited

        if(row<arr.length-1){
            findPath(processed + "D", row+1, col, arr);
        }
        if(col>0){
            findPath(processed + "L", row, col-1, arr);
        }
        if(col<arr[0].length-1){
            findPath(processed + "R", row, col+1, arr);
        }
        if(row>0){
            findPath(processed + "U", row-1, col, arr);
        }

        //function ko return karne se phele make array just like it was before
        arr[row][col]= true;// backtrack

    }
    //path needs to be backtracked as that a non primitive original object is being modified
    // steps don't need to be modified as they are different for evrey function call 
    //steps the current step of recursion call
    static void findPathSteps(String s, int row, int col, boolean[][] maze, int[][] path, int steps){
        if(row==maze.length-1 && col==maze[0].length-1){
            path[row][col]=steps;
            for(int[] arr : path){
                System.out.println(Arrays.toString(arr));
            }
            System.out.println(s);
            System.out.println();
            path[row][col]=0;
            return ;
        }

        if(!maze[row][col]) return; // if already visited then return 

        maze[row][col]= false;// the current cell on which you just came in mark it visited 
        path[row][col]=steps;

        if(row<maze.length-1){
            findPathSteps(s + "D", row+1, col, maze, path, steps+1);
        }
        if(col>0){
            findPathSteps(s + "L", row, col-1, maze, path, steps+1);
        }
        if(col<maze[0].length-1){
            findPathSteps(s + "R", row, col+1, maze, path, steps+1);
        }
        if(row>0){
            findPathSteps(s + "U", row-1, col, maze, path, steps+1);
        }

        //function ko return karne se phele make array just like it was before
        path[row][col]=0;
        maze[row][col]= true;// backtrack

    }
}
