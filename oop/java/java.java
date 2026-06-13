class dog
{
    String colour;
    dog(String c)
    {
        colour = c;
    }
    // void display()
    // {
    //     System.out.println(colour + " dog");
    // }
    public String toString()
    {
        return colour + " dog\n";

    }
} 


class cat
{
    String colour;
    cat(String c)
    {
        colour = c;
    }
    // void display()
    // {
    //     System.out.println(colour + " cat");
    // }
    public String toString()
    {
        return colour + " cat\n";

    }
}

public class java {

    static Object function(int x)
    {
        if (x % 2 == 0)
        {
            return new cat("white");
        }
        return new dog("black");
    }

    public static void main(String[] args)
    {
        
        // int a = new Integer(30);

        // dog d = new dog("brown");
        // Object o = d;
        // o.display();
        Object o = function(38);
        if (o instanceof dog)
        {
            System.out.println("it's a dog");
            //((dog)o).display();
            System.out.println(o);
            
        }
        else {
             System.out.println("it's a cat");
             //((cat)o).display();
             System.out.println(o);
        }




    }
    
}
