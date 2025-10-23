import java.util.Scanner;
// public class Tryout {
//     // int x,y;
//     public static void main(String[] args) {
//         // Tryout t1 = new Tryout();
//         //     t1.x =97;
//         //     int y;
//         //     System.out.println(t1.x);
//         //     System.out.println(t1.y);
//         //     //System.out.println(y); error

//         Integer x1 = 39;
//         Integer x2 = 39;
//         System.out.println(x2==x1);
//         x2 = 36;
//         System.out.println(x1);
//     }
// }
class Tryout{
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character: ");
        char c = sc.next().charAt(0); 
        System.out.println(c);
    }
}