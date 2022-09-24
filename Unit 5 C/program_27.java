/*Write a Java program to demonstrate use of abstract class and abstract
method
*/
abstract class Shape {
    abstract void draw();
}

class Rectangle extends Shape {
    void draw() {
        System.out.println("drawing rectangle");
    }
}

class Circle1 extends Shape {
    void draw() {
        System.out.println("drawing circle");
    }
}

public class program_27 {
    public static void main(String[] args) {
        Shape s = new Rectangle();
        Shape s1 = new Circle1();
        s.draw();
        s1.draw();
    }
}