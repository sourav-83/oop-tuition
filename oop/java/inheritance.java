class animal
{
    int legs;
    int hands;
    void speak()
    {
        System.out.println("animal speaking...\n");
    }
    animal(int legs)
    {
        this.legs = legs;
    }
}

class cat extends animal{
    
    String colour;

    cat(int legs, String colour,int hands)
    {   
        super(legs);
        this.colour = colour;
        super.hands = hands;
        
    }
    void move()
    {
        System.out.println("cat is moving...\n");
    }
    void move(String from, String to)
    {
        System.out.println("cat is moving from \n"+ from + " to " + to);
    }
    void description()
    {
        System.out.println("the cat has "+ legs + " legs and it's colour is "+ colour);
        // speak();
        // animal();
        
    }
    void speak()
    {
        System.out.println("meow");
    }
}
class dog{

}

class persianCat extends cat{
    persianCat(int legs, int hands)
    {
        super(legs, "white", hands);
    }
}

public class inheritance {

    public static void main(String[] args)
    {
        
        // cat c = new cat();
        // c.legs = 4;
        // c.colour = "white";
        // c.description();
        cat c = new cat(4, "orange", 0);
        animal a = c;
        
        //a.description();
        a.speak();
        // animal b = new animal();
        // c = b;

    }
    
}
