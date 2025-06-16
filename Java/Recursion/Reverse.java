public class Reverse {
    public static void main(String[] args) {
        int n = 0;
        System.out.println(rev(n));
    }
    static int rev(int n){
        int digits = (int)Math.log10(n)+1;
        return helper( n, digits);
    }
    static int helper(int n, int digits){
        if(n%10==n) return n;

        return n%10*(int)Math.pow(10,digits-1) + helper(n/10, digits-1);
    }
}
