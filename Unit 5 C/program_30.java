/* Write a Java program to extend one interface into another interface
 */
// import java.lang.*;
// interface A1
// {
//    void shape();
// }

// interface A2
// {
//    void shapecolour();
// }

// interface A3 extends A1,A2
// {
//    void Shapesize();
// }

// class A4 implements A3
// {
//    public void shape(){System.out.println("circle");}
//    public void shapecolour(){System.out.println("red");}
//    public void Shapesize(){System.out.println("big");} 
// }

// public class program_30
// {
//    public static void main(String[] args) 
//    {
//        A4 n = new A4();

//        n.shape();
//        n.shapecolour();
//        n.Shapesize();

//    }
// }

interface A1 {
    void print();
}

interface A2 {
    void show();
}

class program_30 implements A1, A2 {
	@Override
    public void print() {
        System.out.println("Hello");
    }
	@Override
    public void show() {
        System.out.println("Welcome");
    }

    public static void main(String args[]) {
        program_30 obj = new program_30();
        obj.print();
        obj.show();
    }
}