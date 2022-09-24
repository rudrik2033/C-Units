/*Write a Java program to demonstrate use of interface*/

interface A1
{
    void shape();
}

class A2 implements A1
{
    public void shape()
    {
        System.out.println("Circle");
    }
}

public class program_28 
{
    public static void main (String[] args) 
    {
        A1 n = new A2();
        
        n.shape();
    }
}