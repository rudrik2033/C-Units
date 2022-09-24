/* Write a Java program to demonstrate use of final keyword with class 
and method.
*/

final class example
{
    int num;
    
    final void input()
    {
        num=143;
    }
    void display()
    {
        System.out.println(num);
    }
}
   
public class program_26
{
    public static void main (String[] args) 
    {
        example e = new example();
        
        e.input();
        e.display();
    }
}