public class Inferred {
    public static void main(String[] args) {
        Inferred obj = new Inferred();
        obj.printdata("Hello World");
    }
    <T>void printdata(T s){
        System.out.println(s);
    }
}
