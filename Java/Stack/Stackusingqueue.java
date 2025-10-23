import java.util.Queue;
import java.util.LinkedList;
import java.util.EmptyStackException;

class Stackusingqueue{
    Queue<Integer> q1 = new LinkedList<>();
    public void push(int x) {
        q1.add(x);
    }

    public int pop() {
        if (q1.isEmpty()) {
            throw new EmptyStackException();
        }
        Queue<Integer> q2 = new LinkedList<>();

        while (q1.size() > 1) {
            q2.add(q1.poll());
        }
        int poppedValue = q1.poll();
        // Swap the names of the queues
        q2.add(poppedValue);
        q1 = q2;
        return poppedValue;
    }

    // public int top() {
    //     if (q1.isEmpty()) {
    //         throw new EmptyStackException();
    //     }
    //     while (q1.size() > 1) {
    //         q2.add(q1.poll());
    //     }
    //     int topValue = q1.peek();
    //     q2.add(q1.poll());
    //     // Swap the names of the queues
    //     Queue<Integer> temp = q1;
    //     q1 = q2;
    //     q2 = temp;
    //     return topValue;
    // }

    public boolean isEmpty() {
        return q1.isEmpty();
    }
    public static void main(String[] args) {
        Stackusingqueue stack = new Stackusingqueue();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Is stack empty? " + stack.isEmpty());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Is stack empty? " + stack.isEmpty());
    }
}