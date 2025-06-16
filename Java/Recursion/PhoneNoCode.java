import java.util.ArrayList;

public class PhoneNoCode {
    public static void main(String[] args) {
        String code = "12";
        System.out.println(deCoder(code, 0, ""));//deCoder should return an ArrayList
    }
    static ArrayList<String> deCoder(String code, int i, String processed){
        ArrayList<String> ans = new ArrayList<>();
        if(i==code.length()){
            ans.add(processed);
            return ans;
        }

        int digit = code.charAt(i)-'0';

        for(int j = (digit-1)*3 ; j<digit*3; j++ ){
            ans.addAll(deCoder(code, i+1, processed + (char)('a'+j)));
        }
        return ans;
    }
}
