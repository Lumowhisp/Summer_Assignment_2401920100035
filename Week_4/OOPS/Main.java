// Interface
interface Test {
    int square(int n);
}

// Arithmetic class
class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

// Outer and Inner class
class Outer {
    void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {
        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}

// Point class
class Point {
    private int x, y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

// Box class
class Box {
    double length, breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

// Box3D class
class Box3D extends Box {
    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        // Problem 1
        System.out.println("----- Problem 1 -----");
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 6 = " + a.square(6));

        // Problem 2
        System.out.println("\n----- Problem 2 -----");
        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();

        // Problem 3
        System.out.println("\n----- Problem 3 -----");
        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p1.setXY(5, 15);
        p1.display();

        // Problem 4
        System.out.println("\n----- Problem 4 -----");
        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 4);
        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}