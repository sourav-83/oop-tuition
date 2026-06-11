import java.util.Scanner;

class student {

    private int id;
    private int age;
    private float marks;

    public student(int age, int id, float marks) {
        this.age = age;
        this.id = id;
        this.marks = marks;
    }

    public int getAge() {
        return age;
    }

    public int getId() {
        return id;
    }

    public float getMarks() {
        return marks;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setMarks(float marks) {
        this.marks = marks;
    }

    void display() {
        System.out.println("age: " + age);
        System.out.println("id: " + id);
        System.out.println("marks: " + marks);
    }

}

public class task {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter age:");
        int a = sc.nextInt();
        System.out.print("enter id:");
        int i = sc.nextInt();
        System.out.print("enter marks:");
        float m = sc.nextFloat();
        student s = new student(a, i, m);
        System.out.println(s.getId());
        System.out.println(s.getAge());
        System.out.println(s.getMarks());
        s.display();

    }
}
