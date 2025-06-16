// public class Subsets {
//     public static void main(String[] args) {
//         String str = "abc";
//         subsetGenerator("", str);
//     }
//     static void subsetGenerator(String processed, String str){
//         if(str.isEmpty()){
//             System.out.print(processed + ", ");
//             return;
//         } 

//         subsetGenerator(processed + str.charAt(0), str.substring(1));
//         subsetGenerator(processed, str.substring(1));
//     }
// }

import java.util.ArrayList;

class Subsets{
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
        ArrayList<String> include = subsequence(processed+str.charAt(0), str.substring(1));
        
        ArrayList<String> exclude = subsequence(processed, str.substring(1));

        // ans.addAll(include);
        // ans.addAll(exclude);
        include.addAll(exclude);
 

        
        return include;
    }
}
