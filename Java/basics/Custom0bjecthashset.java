import java.util.*;
public class Custom0bjecthashset {
    public static void main(String[] args) {
        Set<Student> set = new HashSet<>();
        set.add(new Student(1,"Ayush"));
        set.add(new Student(1,"Ayush"));
        set.add(new Student(1,"Ayush"));
        System.out.println(set);

    }
}
class Student{
        int rollno;
        String name;

        Student(int rollno, String name){
            this.rollno = rollno;
            this.name = name;
        }

        @Override
        public boolean equals(Object obj) {
            if (this == obj) return true;
            if (obj == null || getClass() != obj.getClass()) return false;
            Student student = (Student) obj;
            return rollno == student.rollno && Objects.equals(name, student.name);
        }
    
        @Override
        public int hashCode() {
            return Objects.hash(rollno, name);
        }

        @Override
        public String toString() {
        
        return "Student{" +
        "rollno=" + rollno +
        ", name='" + name + '\'' +
        '}';   
    }
}
