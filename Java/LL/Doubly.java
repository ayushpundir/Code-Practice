class Ddl{
    class Node{
        int data;
        Node next;
        Node prev;

        Node (int data){
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }
        private Node head;

        void add(int data) {
            Node newNode = new Node(data);
            if (head == null) {
                head = newNode;
                return;
            }
            Node last = head;
            while(last.next != null ){
                last = last.next;
            }
            last.next =  newNode;
            newNode.prev = last;
            newNode.next = null;
        }
        void display() {
            Node current = head;
            while (current != null) {
                System.out.print(current.data + " <-> ");
                current = current.next;
            }
            System.out.println("null");
    }

        // user will always give a valid index
        // if index is out of bounds we could have, return null
        Node getPreviousNode(int index) {
            if(index == 0 ) return null;
            Node temp = head;
            for(int i = 0;i < index -1; i++) {
                temp = temp.next;
            }
            return temp;
        }

        void insertAtIndex(int index, int data){
            Node newNode = new Node(data);
            if (index == 0) {
        newNode.next = head;
        if (head != null) {
            head.prev = newNode;
        }
        head = newNode;
        return;
    }
            Node p = getPreviousNode(index);
            System.out.println("p: " + p.data);
            newNode.prev = p;
            newNode.next = p.next;
            if (p.next != null) {
                p.next.prev = newNode;
            }
            p.next = newNode;
        }
        // we can also do it like this
        /*node.next = p.next
         * p.next = node
         * node.prev = p
         * node.next.prev = node (after checking if node.next is not null)
         */

}
public class Doubly {
    public static void main(String[] args) {
        Ddl list = new Ddl();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.insertAtIndex(0, 45);
        list.display();
    }
}
