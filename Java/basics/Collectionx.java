import java.util.*;
public class Collectionx {
    public static void main(String[] args) {
        Stack<String> fruits = new Stack <>();
        fruits.add("apple");
        System.out.println(fruits.pop());
        System.out.println(fruits);

        Queue<Integer> q = new LinkedList<>();
        q.offer(1);
        q.offer(2);
        System.out.println(q.peek());
        

    }
}
