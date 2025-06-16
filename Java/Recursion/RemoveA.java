public class RemoveA {
    public static void main(String[] args) {
        String withA = "baccad";
        System.out.println(aRemover(withA, 0)); // aRemover returns a string without a
    }
    static String aRemover(String str, int i){
        if(i>=str.length()) return "";

        StringBuilder ans = new StringBuilder();

        if(str.charAt(i) != 'a') ans.append(str.charAt(i));

        String ansFromBelowCalls = aRemover(str, i+1);

        ans.append(ansFromBelowCalls.toString());

        return ans.toString();
    }
}
