import java.util.ArrayList;

public class SubsetASCII {
    public static void main(String[] args) {
        String str = "abc";
        ArrayList<String> list = subsequence("",  str);
        System.out.println(list);
    }
    static ArrayList<String> subsequence(String processed, String str){
        if(str.isEmpty()){
            ArrayList<String> ans = new ArrayList<>();
            ans.add(processed);
            return ans;
        }
        char ch = str.charAt(0);
        ArrayList<String> include = subsequence(processed+str.charAt(0), str.substring(1));
        
        ArrayList<String> exclude = subsequence(processed, str.substring(1));

        ArrayList<String> third = subsequence(processed + (ch+0), str.substring(1));

        // ans.addAll(include);
        // ans.addAll(exclude);
        include.addAll(exclude);
        include.addAll(third);
 

        
        return include;
    }
}


