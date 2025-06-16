//done myself better than kunal kushwaha approach verified by chatgpt
public class reverse2 {
    public static void main(String[] args) {
        int n = 1824;
        int ans = rev(n);
        System.out.println(ans);
    }
    static int rev(int n){
        return helper(n, 0);
    }
    static int helper(int n, int ans){
        if(n==0) return ans;
        ans = ans * 10 + n%10;
        return helper(n/10, ans);
    }
}
