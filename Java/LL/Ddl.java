package Java.LL;

public class Ddl {
    private Node head;
    private Node tail;
    private int size;

    public Ddl() {
        this.size = 0;
    }

    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
        size++;
    }

    public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    private class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }
}
