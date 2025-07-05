//import java.util.Stack;
class ReverseString{
    public static void main(String[] args) {
        // brute force 
    //     String input = "Revrese the order of words";

    //     Stack<String> stack = new Stack<>();
        
    //     String str = "";
    //     for(int i = 0;i<input.length();i++){
    //         if(input.charAt(i)==' '){
    //             stack.push(str);
    //             str = "";
    //         }
    //         else{
    //             str +=input.charAt(i);
    //         }
    //     }
    //     stack.push(str);
    //     String ans = "";
    //     while(stack.size()!=1){
    //         ans += stack.peek() + " ";
    //         stack.pop();
    //     }
    //     System.out.println(stack.peek());
    //     ans += stack.peek();
    //     stack.pop();
    //     System.out.println(ans);

    String ans = "";
    String input = "Reverse the order of words";
    String str = "";
    for(int i = input.length()-1;i>=0;i--){
        str += input.charAt(i);

        if(input.charAt(i)==' '){
            String temp = reverse(str);
            ans += temp + " ";
            str = "";
        }
    }
    String temp = reverse(str);
    ans += temp;
    System.out.println(ans);
    }
    static String reverse(String str){
        String ans = "";
        for(int i = str.length()-1;i>=0;i--){
            ans +=str.charAt(i);
        }
        return ans;
    }
}