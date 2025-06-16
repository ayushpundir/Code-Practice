public class Pattern2 {
    public static void main(String[] args) {
        printer(7);
    }
    static void printer(int n){
        helper(1,1, n  );
    }
    static void helper(int i, int j, int n){
        if(i>n) return ;
        if(j<=i) {
            System.out.print("* ");
            helper(i, j+1, n);
        }
        else{
            System.out.println();
            helper(i+1, 1, n);
        }
    }
}
