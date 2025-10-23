public class Decimaltobinary {
    public static void main(String[] args) {
        String num = "0101";
        int ans = 0;
        int k=1; // 1,2,4,8,16...
        int i = num.length()-1;
        while(i>=0){
            ans = ans + (num.charAt(i) - '0')*k;
            /*
            ASCII code of 0 is 48 and of 1 is 49
            Here, num.charAt(i) - '0' converts the character to its corresponding 
            numeric value. For instance, if num.charAt(i) is '3', then 3-0 result in 3
            since 51-48 is 3.
            */
            i--;
            k*=2;
        }
        System.out.println(ans);
    }
}
