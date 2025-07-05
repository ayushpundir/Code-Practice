import java.util.Scanner;

public class PaliString {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        sc.close();

        if(str == null || str.length() == 0){
            System.out.println("true");
            return ;
        }
        

        for(int i = 0;i<=str.length()/2;i++){
            char s = str.charAt(i);
            char e = str.charAt(str.length() - 1 - i);
            if(s != e){
                System.out.println("false");
                return;
            }
        }
        System.out.println("true");
        return;



        // String str = "abcdcba";
        // char[] strArray = str.toCharArray();
        // int s = 0, e = strArray.length -1;
        // while(s<=e){
        //     if(strArray[s]!=strArray[e]){
        //     System.out.println("False");
        //     return;}
        //     s++;
        //     e--;

        // }
        // System.out.println("True");
    }
}
