
public class dataTypes {
    static void f(int data) {
        data = data + 10;
    }

    static void f2(int []data) {
        data[0] = data[0] + 100;
    }

    static void swap(int a, int b) {
        int c = a;
        a = b;
        b = a;
    }

    public static void main(String[] args) {

        // int d = 10;
        // f(d);
        // System.out.println(d);


        // int[] arr = {1,2,3};
        // f2(arr);
        // System.out.println(arr[0]);


        // int a=10, b=20;
        // a += (b - (b = a));
        // System.out.println(a);
        // System.out.println(b);

        int[] arr = {1,3,2,4,2,5,3,7,4,9};
        //int[] arr2 = new int[10];
        // 
        // System.out.println(arr.length);

        int b[ ][ ] = { { 1, 2 }, { 3, 4, 5 } };
        b[0][2] = 8;

        

    }

}
