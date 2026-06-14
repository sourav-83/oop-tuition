interface library {
    int bookCount = 100;
    void readingBook();
    default void error()
    {
        System.out.println("it will raise an error");
    }
}

class publicLibrary implements library {
    
    public void readingBook() {
        // bookCount = 110;
        System.out.println("student reading a book");
    }
    public void error()
    {
        System.out.println("it will not raise an error");
    }
    
}

class privateLibrary implements library {
    public void readingBook() {
        System.out.println("teacher reading a book");
    }
}

class guest implements library {
    public void readingBook() {
        System.out.println("guest reading a book");
    }
}

public class interfaceTask {
    public static void main(String[] args) {
        // student s = new student();
        // teacher t = new teacher();
        // guest g = new guest();
        // s.readingBook();
        // t.readingBook();
        // g.readingBook();
        //library l = new library();
        // library l = new privateLibrary();
        // l.readingBook();
        try{
             int x = 100 / 0;
        }
        catch(Exception prithy)
        {
            System.out.println("there was a problem during calculation "+ prithy);
        }
        
        System.out.println("last line");

    }
}
    

