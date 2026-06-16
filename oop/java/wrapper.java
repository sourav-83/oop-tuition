public class wrapper {
    public static void main(String[] args){
       
        int i = 7;
        Integer object = new Integer(100);
        Integer object2 = 100; // auto boxing
        System.out.println(i + " " + object);
        int i2 = object2; // auto unboxing
        double d = 1.23;
        Double d = new Double(d);

    }
}