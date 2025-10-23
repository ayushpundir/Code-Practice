class Student{
        int id;
        int marks;

        //funtion overloading
        //constructor overloading
        Student(){

        }
        Student(int id, int marks){
            this.id = id;
            this.marks = marks;
        }
}

public class Const {

    public static void main(String[] args) {
        Student s1 = new Student(1, 100);
        Student s2 = new Student();

        System.out.println(s2.id);
        System.out.println(s1.id);


    }
}
