public class Count0s {
    public static void main(String[] args) {
        int n = 0;
        System.out.println(counter(n));
    }
    static int counter(int n){
        if(n%10==n){
            if(n%10==0) return 1;
            return 0;
        }

        if(n%10==0) return 1+counter(n/10);
        return counter(n/10);

    }
}
