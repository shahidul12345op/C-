class Rectangle {
    private double width;
    private double height;

    // Constructor
    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    // Method to calculate area
    public double getArea() {
        return width * height;
    }

    // Method to calculate perimeter
    public double getPerimeter() {
        return 2 * (width + height);
    }
}

// Square class extending Rectangle
class Square extends Rectangle {
    // Constructor using side length
    public Square(double sideLength) {
        super(sideLength, sideLength);
    }
}

// Circle class extending Square
class Circle extends Square {
    // Constructor using radius
    public Circle(double radius) {
        super(radius * 2); // Diameter is twice the radius, so use it as the side length
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Create instances of Rectangle and Square
        Rectangle rectangle = new Rectangle(5, 8);
        Square square = new Square(4);

        // Create an instance of Circle
        Circle circle = new Circle(3);

        // Call getArea() and getPerimeter() methods on Rectangle
        System.out.println("Rectangle Area: " + rectangle.getArea());
        System.out.println("Rectangle Perimeter: " + rectangle.getPerimeter());

        // Call getArea() and getPerimeter() methods on Square
        System.out.println("\nSquare Area: " + square.getArea());
        System.out.println("Square Perimeter: " + square.getPerimeter());

        // Call getArea() and getPerimeter() methods on Circle
        System.out.println("\nCircle Area: " + circle.getArea());
        System.out.println("Circle Perimeter: " + circle.getPerimeter());
    }
}

