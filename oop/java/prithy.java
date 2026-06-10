import java.util.Scanner;


class account{

  private int balance;

  public account(int balance)
  {
       this.balance = balance;
  }

  public int getBalance()
  {
    return balance;
  }

}

public class prithy {
    public static void main(String[] args)
    {
      
        
        // System.out.println("my name is prithy");
        // String s = "cse";
        // //System.out.printf("my department is %s", s);
        // //System.out.println("my department is " + s);
        // int useless = 83;
        // System.out.println("my roll is " + useless);

        // javac prithy.java
        // java prithy

        // Scanner scanner = new Scanner(System.in);
        // String s = scanner.next();
        // System.out.println(s);


        // String s = scanner.nextLine();
        // System.out.println(s);

        // int i = scanner.nextInt();
        // System.out.println(i);


        account a = new account(38);
        System.out.println(a.getBalance());

        
    }
    
}
