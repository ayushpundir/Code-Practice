import java.util.ArrayList;
class Wrapperclass{
    public static void main(String args[]){
        Boolean b = Boolean.valueOf(false);
        ArrayList<Integer> arr1 = new ArrayList<>();
        System.out.println(b);
        System.out.println(arr1);

        dog<Integer, String> d1 = new dog<>();
        d1.name = "Tommy";
        d1.id = 323;
        System.out.println(d1);
    }
}
//genrics
class dog<T,v>{
    T id;
    v name;
}