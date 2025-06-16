import java.util.ArrayList;

public class diceThrow {
    public static void main(String[] args) {
        int target = 4;
        int take = 0;
        System.out.println(answers(take, target));
    }
    static ArrayList<Integer> answers(int take, int target){
        if(target == 0){
            ArrayList<Integer> ans = new ArrayList<>();
            ans.add(take);
            return ans;
        }
        ArrayList<Integer> ans = new ArrayList<>();

        for(int i = 1;i<=6 && i<=target;i++){
            ans.addAll(answers(take*10+i, target-i));
        }
        return ans;
    }
}
