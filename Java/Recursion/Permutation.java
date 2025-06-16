import java.util.ArrayList;

public class Permutation {
    public static void main(String[] args) {
        String str = "abc";
        System.out.println(permutation("", str, 0)); // permutation has to return a list contaning all permutations
    }
    static ArrayList<String> permutation(String processed, String str, int i){
        ArrayList<String> ans = new ArrayList<>();
        if(i==str.length()){
            ans.add(processed);
            return ans;
        }

        for(int j = 0;j<processed.length()+1;j++){
            ans.addAll(permutation((processed.substring(0, j) + str.charAt(i)) + processed.substring(j, processed.length()), str, i+1));
        }

        return ans;
    }
}
