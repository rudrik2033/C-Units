/*Write a Java program to demonstrate use of Multiple inheritance using 
interface */
interface A1
{
    void shape();
}

interface A2
{
    void shapecolor();
}

class A3 implements A1,A2
{
    public void shape(){System.out.println("circle");}
    public void shapecolor(){System.out.println("red");}     
    
}

public class program_29
{
    public static void main(String[] args) 
    {
        A3 n = new A3();

        n.shape();
        n.shapecolor();
    }
}