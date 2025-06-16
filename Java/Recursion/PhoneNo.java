public class PhoneNo {
    public static void main(String[] args) {
        String digits= "12";

        recursion(digits, 0, "");
    }
    static void recursion(String s, int i,String processed){
        if(i==s.length()) {
            System.out.println(processed);
            return;
        }

        int digit = s.charAt(i)-'0';
        //int startingOfNum = ('a' + (digit-1)*3);

        for(int j = (digit-1)*3; j<digit*3; j++){
             recursion(s, i+1, processed + (char)('a' + j));
        }
    }
}
