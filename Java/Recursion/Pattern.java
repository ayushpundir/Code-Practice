class Pattern{
    public static void main(String[] args) {
        printer(7);
    }
    static void printer(int n){
        helper(1, 1, n);
    }
    static void helper(int i, int j, int n){
        if(i>n) return ;

        System.out.print("* ");

        if(j>n-i) {
            System.out.println();
            helper(i+1, 1, n);
        }
        else{
            helper(i, j+1, n);
        } 
        
    }
}