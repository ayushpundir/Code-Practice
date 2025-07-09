public class Main {
    public static void main(String[] args) {
        // ChildBox box1 = new ChildBox(1);
        // System.out.println(box1.vol);

        Nicecar car1 = new Nicecar(new Powerengine());
        Nicecar car2 = new Nicecar(new Electricengine());

        car1.start(); // Output: Powerengine is starting
        car2.start(); // Output: Electricengine is starting
    }
}
