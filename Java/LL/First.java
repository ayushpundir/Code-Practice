class LL{
    //added to github
    Node head;
    Node tail;
    int size;

    LL(){
        this.size = 0;
    }
    void insertAtFirst(int data){
        Node node = new Node(data);
        node.next = head;
        head = node;
        if(tail == null) tail = head;
        size += 1;
    }
    void insertAtLast(int data){
        Node node = new Node(data);
        if (head == null) {
            head = tail = node;
        } else {
            tail.next = node;
            tail = node;
        }
        size += 1;
    }

    public Node getIndex(int pos){

        Node temp = head;
        for(int i = 0;i<pos;i++){
            temp = temp.next;
        }
        return temp; // if pos was 5 temp will be on 6th index
    }

    public void deleteAtPosition(int pos){
        if (pos == 1) {
            deleteAtFirst();
            return;
        }
        if (pos == size) {
            deleteAtLast();
            return;
        }

        Node temp = getIndex(pos-2);
        temp.next = temp.next.next;
        size--;
    }

    public void deleteAtLast(){
        if (size == 0) return; // nothing to delete
        if (size == 1) {
            head = tail = null;
            size = 0;
            return;
        }
        Node temp = getIndex(size-2);
        tail = temp;
        temp.next = null;
        size--;
    }

    public void deleteAtFirst(){

        if(head == null) return;
        head = head.next;
        if(head == null) tail = null;
        size--;
    }


    public void display(){
        Node temp = head;
        while(temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.print("null");
        System.out.println();
    }

    public static class Node{
        int data;
        Node next;

        Node(int data){
            this.data = data;
        }
        Node(int data, Node next){
            this.data = data;
            this.next = next;
        }
    }
}

public class First {
    public static void main(String[] args) {
        LL list = new LL();
//        list.insertAtFirst(1);
//        list.insertAtFirst(23);
//        list.insertAtFirst(21);
//        list.display();
        list.insertAtLast(21);
        list.insertAtLast(23);
        list.insertAtLast(1);
        list.insertAtLast(15);
        list.insertAtLast(19);
        list.insertAtLast(24);

        list.deleteAtLast();
        list.display();
        System.out.println(list.size);

        list.deleteAtPosition(3);
        list.display();
        System.out.println(list.size);
          list.deleteAtFirst();



    }
}
