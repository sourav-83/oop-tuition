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
    @Override
    public String toString()
    {
        return colour + " dog\n";

    }
    @Override
    public boolean equals(Object o){

        if(!(o instanceof dog))
        {
            return false;
        }
        dog d = (dog) o;
        if(colour == d.colour) return true;
        return false;
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

public class equals {

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
        dog d  = new dog("black");
        dog dd = new dog("white");
        cat c = new cat("black");
        if (d.equals(c))
        {
            System.out.println("same same");
        }
        else {
            System.out.println("different");
        }



    }
    
}
