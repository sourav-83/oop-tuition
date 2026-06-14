interface library {
    default void error()
    {
        System.out.println("it will raise an error from library");
    }
}

interface readingRoom {
    default void error()
    {
        System.out.println("it will raise an error from reading room");
    }

}
class concreteClass implements library, readingRoom {
    public void error()
    {
       
    }

}


public class multiple_inheritance {
    
}
