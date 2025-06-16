public class Palindrone {
    public static void main(String[] args) {
        int n = 12321;
        System.out.println(isTrue(n));
    }
    static boolean isTrue(int n){
        String s = String.valueOf(n);
        int digits = s.length();
        return helper(s, 0, digits-1);
    }
    static boolean helper(String s, int i, int j){
        if(i>j) return true;
        if(s.charAt(i)!=s.charAt(j)) return false;

        return helper(s, i+1, j-1);
    }
}
