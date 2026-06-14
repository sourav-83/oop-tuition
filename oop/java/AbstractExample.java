abstract class animal{
   
    abstract void speak();
    final void move()
    {
        System.out.println("step aisde...animal moving");
    }
}

class cat extends animal{
    
    void speak()
    {   
        System.out.println("meow");
        //move();
        complex_calculation();
        
    }
    private void complex_calculation()
    {

    }

    
}
public class AbstractExample {
    public static void main(String[] args)
    {
        // animal a;
        // a = new cat();
        // a.speak();
        // a.move();
        // animal a = new animal();


        animal anml = new animal() {
            void speak() {
                System.out.println("trick");
            }
        };

        anml.speak();
        // var x = 10;
        // var y = "string";
    }
}
