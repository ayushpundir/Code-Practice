package Java.polymorphism;

class NonStaticShapes {
    void area() {
        System.out.println("I'm in NonStaticShapes");
    }
}

class NonStaticRectangle extends NonStaticShapes {
    @Override
    void area() {
        System.out.println("I'm in NonStaticRectangle");
    }
}

class NonStaticCircle extends NonStaticShapes {
    @Override
    void area() {
        System.out.println("I'm in NonStaticCircle");
    }
}

public class NonStaticDemo {
    public static void main(String[] args) {
        System.out.println("=== NON-STATIC METHOD BEHAVIOR ===");
        
        // Creating objects
        NonStaticShapes shape = new NonStaticShapes();
        NonStaticRectangle rect = new NonStaticRectangle();
        NonStaticCircle circle = new NonStaticCircle();
        
        System.out.println("Calling non-static methods on objects:");
        shape.area();       // Calls NonStaticShapes.area()
        rect.area();        // Calls NonStaticRectangle.area()
        circle.area();      // Calls NonStaticCircle.area()
        
        // Polymorphism WORKS with non-static methods
        System.out.println("\nPolymorphism test with non-static methods:");
        NonStaticShapes poly1 = new NonStaticRectangle();
        NonStaticShapes poly2 = new NonStaticCircle();
        
        poly1.area();  // Calls NonStaticRectangle.area() - Polymorphism works!
        poly2.area();  // Calls NonStaticCircle.area() - Polymorphism works!
        
        System.out.println("\n=== KEY POINTS ABOUT NON-STATIC METHODS ===");
        System.out.println("1. Non-static methods belong to the object instance");
        System.out.println("2. They are resolved at runtime (late binding)");
        System.out.println("3. Polymorphism works with non-static methods");
        System.out.println("4. Method overriding occurs");
    }
}
