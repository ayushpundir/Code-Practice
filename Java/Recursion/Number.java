//write a function that take a number as input and prints it 
//print 1 2 3 4 5
//package Java.Recursion;
public class Number{
    public static void main(String[] args) {
        printer(1);
    }
    static void printer(int n ){
        if(n==6)
        return;
        
        System.out.print(n++ + " ");
        printer(n);
    }
}