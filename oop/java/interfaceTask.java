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

    void f()
    {   
        try{
              throw new IllegalAccessException("illegal");
        }
        catch(Exception e) {
            System.out.println("....");
        }
        
    }
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
             int x = 100 / 10;
             throw new NullPointerException("hehe we created it");
        }
        catch(ArithmeticException prithy)
        {
            System.out.println("there was a problem during calculation "+ prithy);
        }
        catch(NullPointerException e)
        {
            System.out.println("null pionter exception");
        }
        catch(Exception e)
        {
            System.out.println("god knoes what exception it is");
        }
        finally {
            System.out.println("we are in finally");

        }
        
        System.out.println("last line");


        // int arr[] ={1,2,3};
        // for (int i=0; i<5; i++)
        // {
        //     arr[i] = 1 + arr[i];
        // }

    }
}
    

