package Java.polymorphism;

class Rectangle extends Shapes {
    static void area() {
        System.out.println("I'm in Rectangle");
    }
}

class Circle extends Shapes {
    static void area() {
        System.out.println("I'm in Circle");
    }
}

public class StaticDemo {
    public static void main(String[] args) {
        System.out.println("=== STATIC METHOD BEHAVIOR ===");
        
        // Creating objects
        Shapes shape = new Shapes();
        Rectangle rect = new Rectangle();
        Circle circle = new Circle();
        
        // Calling static methods directly on classes
        System.out.println("Calling static methods on classes:");
        Shapes.area();      // Calls Shapes.area()
        Rectangle.area();   // Calls Rectangle.area()
        Circle.area();      // Calls Circle.area()
        
        System.out.println("\nCalling static methods on objects:");
        Shapes.area();       // Calls Shapes.area() calling it directly
        // shape.area();       // This would call Shapes.area() - static methods are not overridden
        rect.area();        // Calls Rectangle.area()
        circle.area();      // Calls Circle.area()
        
        // IMPORTANT: Polymorphism doesn't work with static methods
        System.out.println("\nPolymorphism test with static methods:");
        Shapes poly1 = new Rectangle();
        Shapes poly2 = new Circle();
        
        poly1.area();  // Calls Shapes.area() - NOT Rectangle.area()!
        poly2.area();  // Calls Shapes.area() - NOT Circle.area()!
        
        System.out.println("\n=== KEY POINTS ABOUT STATIC METHODS ===");
        System.out.println("1. Static methods belong to the class, not the object");
        System.out.println("2. They are resolved at compile time (early binding)");
        System.out.println("3. Polymorphism doesn't work with static methods");
        System.out.println("4. Method hiding occurs, not method overriding");
    }
}
