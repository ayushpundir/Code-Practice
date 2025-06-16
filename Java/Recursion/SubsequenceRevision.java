//solved at once without any errors just by using recursion tree;

import java.util.ArrayList;

public class SubsequenceRevision {
    public static void main(String[] args) {
        String str = "abc";
        ArrayList <String> list= power(str, 0, "");
        System.out.println(list);
    }
    static ArrayList<String> power(String str, int i, String Processed){
        ArrayList<String> ans = new ArrayList<>();
        if(i==str.length()) {
            ans.add(Processed);
            return ans;
        }

        ans.addAll(power(str, i+1, Processed+str.charAt(i)));
        ans.addAll(power(str, i+1, Processed));

        return ans;
    }
}
