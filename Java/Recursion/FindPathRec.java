import java.util.ArrayList;

public class FindPathRec {
    public static void main(String[] args) {
        int row = 3;
        int col = 3;
        System.out.println(pathFinder("", row, col));
    }
    static ArrayList<String> pathFinder(String processed,int row,int col){
        if(row==1 && col ==1){
            ArrayList<String> BaseAns = new ArrayList<>();
            BaseAns.add(processed);
            return BaseAns;
        }
        ArrayList<String> ans = new ArrayList<>();
        if(row>1) ans.addAll(pathFinder(processed + "D", row-1, col));//going down
        if(col>1) ans.addAll(pathFinder(processed + "R", row, col-1));//going right

        return ans;
    }
}
