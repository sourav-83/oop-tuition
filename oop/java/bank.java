class account {
    public static int count = 0;
    public int balance;
    account()
    {
        balance = 0;
        count++;
    }

    public int getBalance() {
        return this.balance;
    }

    public void setBalance(int balance) {
        this.balance = balance;
    }
    account(int money)
    {
        balance = balance + money;
        count++;
    }
    public static void useful()
    {
        System.out.println("hehe\n");
    }
    public  void useless()
    {
        System.out.println("oh no\n");
    }
}

public class bank {
    public static void main(String[] args)
    {   
        // account a = new account(10);
        // account b = new account(20);
        // System.out.println(a.count);


        //System.out.println(account.count);

        // account.useless();
        // account.useful();

        String s = "prithy";
        // s[0]="b";
        // s.charAt(1)='l';
        // System.out.println(s.charAt(1));
        String p = "prithy";

        if(s.equals(p)) System.out.println("equal");
        else System.out.println("not equal");
        
        
    }
    
}
